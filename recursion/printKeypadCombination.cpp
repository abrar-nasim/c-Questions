#include <iostream>
#include <string>
using namespace std;

void printKeypadHelp(int n, string output) {
    string keypad[] = {"abc","def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"};
    
    
    if(n==0) { // base case
        cout<<output<<endl;
        return;
    }
    
    int k = n%10;
    
    if(k == 7 || k==9) {
        printKeypadHelp(n/10,keypad[k-2][0]+output);
        printKeypadHelp(n/10,keypad[k-2][1]+output);
        printKeypadHelp(n/10,keypad[k-2][2]+output);
        printKeypadHelp(n/10,keypad[k-2][3]+output);

    }
    
    else {
        printKeypadHelp(n/10,keypad[k-2][0]+output);
        printKeypadHelp(n/10,keypad[k-2][1]+output);
        printKeypadHelp(n/10,keypad[k-2][2]+output);
        
    }
    
    
    
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    printKeypadHelp(num,"");
}


int main() {
    int num;
    cin>>num;
    printKeypad(num);
    return 0;
}
