#include<iostream>
#include<string>
using namespace std;

int returnSubsequences(string input, string output[]) {
    if(input[0] == '\0') {
        output[0] = "";
        return 1;
    }
    
    string smallString = input.substr(1);
    int size = returnSubsequences(smallString, output);
    
    for(int i=0; i<size; i++) {
        output[size+i] = input[0]+output[i]; 
    }
    return 2*size;
}




int main() {
    string* output =  new string[1000];
    string str;
    cin>>str;
    
    int size = returnSubsequences(str, output);
    
    for(int i=0; i<size; i++) {
        cout<<output[i]<<endl;
    }
}