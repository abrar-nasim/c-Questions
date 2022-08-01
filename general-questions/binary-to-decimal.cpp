#include <iostream>
using namespace std;

int main()
{
    int num = 101101;
    int rem=0,k=1,decimal=0;
    while(num>0){
        rem=num%10;
        num = num/10;
        decimal = rem*k+decimal;
        k=k*2;
        
    }
    
    cout<<decimal;
    return 0;
}