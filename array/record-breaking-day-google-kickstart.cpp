//record breaking day kickstart
// find no of lements in array suh that the element is greater than all previous and greater than following element

#include <iostream>
using namespace std;

void recordBreaking(int arr[], int size){
    int max = -1;
    int ans = 0;
    
    if(size==1){
        ans = 1;
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]>max && arr[i] >arr[i+1]){
            ans++;
            max = arr[i];
        }
    }
    cout<<ans;
    
}

int main()
{
 
    int arr[] = {1,2,0,7,2,0,2,9,8,100,-1};
    int size = 10;
    
    recordBreaking(arr, size);
    return 0;
}