// This program takes an input string and return all the subsequences of the string ( not specifically return but keep in string array, because if we were to return the output array, we will also need to return its size )
// alternative is to pass string array and populate it and return the size only.

// ------ The program Logic and Flow-------
// Base case: if input string is null, only subsequence possible is null string itself, so output = [""] (contains only null and return size 1) 
// Recusrsive step: call recursion on remaining string, that can be done using substring function.
// Lets say if input = "abc" the string for which subsequences id to be found
// After the recursive step, output = ["","b","c","bc"] i.e all possible subsequnce of bc( recursion will do this for us, Don't question it ever!! )
// Now we need to worry about only one thing, the first element a's participation in subsequences
// for clarity let's look at what we would expect in final output; output = ["","b","c","bc", "a","ab","ac","abc" ]
// Now we will achieve that by duplicating already present elements in output making output = ["","b","c","bc", "","b","c","bc" ]
// And adding(concatenatings) a in front of all of it; hence achieving output = ["","b","c","bc", "a","ab","ac","abc" ]




#include<iostream>
#include<string>
using namespace std;

int returnSubsequences(string input, string output[]) {
    if(input[0] == '\0') { // base case, check if the string is empty
        output[0] = "";
        return 1;
    }
    
    string smallString = input.substr(1); // find smaller substring starting from input[0] to pass to recursion
    int size = returnSubsequences(smallString, output); // recursion hyposthesis step
    
    for(int i=0; i<size; i++) {
        output[size+i] = input[0]+output[i]; // duplicate recursion returned elements of output array and add input[0] to make new set of subsequences with input[0] in it 
    }
    return 2*size; // since the array of string has twice the elements now, return 2*size
}




int main() {
    string* output =  new string[1000]; // make output array to pass to recursive function
    string str;
    cin>>str;
    
    int size = returnSubsequences(str, output);  // call recursive function
    
    for(int i=0; i<size; i++) {
        cout<<output[i]<<endl;  // print all the subsequence of the given string
    }
}