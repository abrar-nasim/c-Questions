// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int octal_to_decimal(int n) {
    int decimal = 0,k=1,rem;
    
    while(n>0){
        rem = n%10;
        decimal = rem*k+decimal;
        n=n/10;
        k=k*8;
    }
    
    return decimal;
}

int main() {
    int n = 2671;
    cout<<octal_to_decimal(n);

    return 0;
}