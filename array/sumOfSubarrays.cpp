//find sum of all the subarrays of given array and print them

#include <iostream>
using namespace std;

void sumSubArr(int arr[], int size){
    
    for(int i=0;i<size;i++){
        int curr = 0;
        for(int j=i;j<size;j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
        // cout<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3};
    int size = 3;
    
    sumSubArr(arr, size);
    // for(int i=0; i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
}