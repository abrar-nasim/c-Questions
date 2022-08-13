#include<iostream>
#include<string>
using namespace std;

string decimal_to_hexadecimal(int p){
    string hex="",k;
   int n = p;
    while(n>0) {
        int k = n%16;
        
        if(k<=9){
            hex = to_string(k)+hex;
        }else{
            char c = 'A' + k -10;
            hex = c+hex;
        }
        
        n=n/16;
    }
    
    return hex;
}



int main(){
    int n;
    cin>>n;
    cout<<decimal_to_hexadecimal(n);
    return 0;
}