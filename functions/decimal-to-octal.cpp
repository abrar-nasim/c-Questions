// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int decimal_to_octal(int n) {
    int octal=0,rem,k=1;
    
    while(n>0){
        rem = n%8;
        octal = rem*k+octal;
        n=n/8;
        k=k*10;
    }
    
    return octal;
    
}

int main() {
    int n = 1465;
    cout<<decimal_to_octal(n);

    return 0;
}