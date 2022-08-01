#include <iostream>
using namespace std;

int main()
{
    int num = 45;
    int rem=0, binary=0; 
    while(num>0){
        rem=num%2;
        num=num/2;
        binary = binary*10+rem;
        
    }
    
    cout<<binary;
    
    return 0;
}