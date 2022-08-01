#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, sum=0, rem;
    cin>>num;
    int orig_num = num;
    
    while(num>0) {
        rem = num%10;
        sum = sum + pow(rem,3);
        num = num /10;
    }
    
    if(orig_num == sum) {
        cout<<"is an armstrong number"<<endl;
    } else{
        cout<<"is not an armstorng number"<<endl;
    }
    
    
    return 0;
}