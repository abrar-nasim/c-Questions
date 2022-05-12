#include<iostream>
#include<string>
using namespace std;

// approach
// we will not store anything, just make two calls at each stage namely, either include 0th element in
// output or not, such as it will hit base case 2^n times

void printSubsequences(string input, string output) {
    if(input.length() == 0) { // when input has become 0 length, base case will hit and output will be printed
        cout<<output<<endl;
        return;
    }
printSubsequences(input.substr(1), output); // we are not taking input[o]
printSubsequences(input.substr(1), output+input[0]); // we are taking input[0]

}

int main() {
    string input = "abc";
    string output = "";

    printSubsequences(input, output);
}