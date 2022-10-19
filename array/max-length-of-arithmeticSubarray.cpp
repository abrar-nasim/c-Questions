//find max length of arithmetic subarray

#include <iostream>
using namespace std;

int max(int i, int j){
    if(i>j){
        return i;
    } else{
        return j;
    }
}

void arithSubArr(int arr[], int size){
   int j=2;
   int pd = arr[1]-arr[0];
   int curr = 2;
   int ans = 2;
   while(j<size){
       if(arr[j]-arr[j-1] == pd){
           curr++;
       } else{
           pd = arr[j]-arr[j-1];
           curr = 2;
       }
        
        ans = max(curr,ans);
        j++;
   }
    
 cout<<ans;  
}

int main()
{
    int arr[] = {1,2,3,4,6,8,10,12,13};
    int size = 9;
    
    arithSubArr(arr, size);
    // for(int i=0; i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
}