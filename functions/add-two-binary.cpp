#include<iostream>
using namespace std;

// Reverse the number function

int reverse(int n) {
    int rev = 0;
    int rem;
    while(n!=0){
        rem = n%10;
        rev = rev *10 +rem;
        n = n/10;
    }
    return rev;
}

// Binary addition function

int binary_addition(int a, int b){
    int carry = 0;
    int sum = 0;
    while(a>0 && b>0){
        if(a%2 == 0 && b%2 == 0){
            sum = sum*10+carry;
            carry = 0;
        } else if( (a%2==1 && b%2 ==0) || (b%2 ==1 && a%2 ==0) ){
            if(carry == 1){
                sum = sum*10 + 0;
                carry = 1;
            } else{
                sum = sum*10 +1;
                carry = 0;
            }
        }else{
            if(carry ==1 ){
                sum = sum*10 + 1;
                carry = 1;
            } else{
                sum = sum*10 + 0;
                carry = 1;
            }
        }
        a=a/10;
        b=b/10;
    }
    
    
    while(a>0) {
        if(carry==1){
            if(a%2==1){
                sum = sum*10 +0;
                carry=1;
            }else{
                sum =sum*10+1;
                carry = 0;
            }
        }else{
            sum = sum*10 + a%2;
        }
        
        
        a=a/10;
        
    }
    
    while(b>0) {
        if(carry==1){
            if(b%2==1){
                sum = sum*10 +0;
                carry=1;
            }else{
                sum =sum*10+1;
                carry = 0;
            }
        }else{
            sum = sum*10 + b%2;
        }
        
        
        b=b/10;
    }
    
    if(carry>0){
        sum =sum*10+1;
    }
    
    return reverse(sum);
}


// Main function 

int main() {
    int a,b;
    cin>>a>>b;
    cout<<binary_addition(a,b);
}