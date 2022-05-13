// tower of hanoi program
//approch
// we have source tower(all disks are initially here, helper tower is empty, destination tower(disks to be moved  here) is empty)
// base case when there is only one disk, we can move it to destination without issue
// recursion: we can move top n-1 disks to helper using destination tower
// our work: we move largest disk to destination
// recursion : we can move n-1 disks from helper to destination using source tower

#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char start,char helper,char destination) {

    if(n==0) { //base 1
        return;
    }
    if(n==1) { // base 2
        cout<< start<<"->"<<destination<<endl;
        return;
    }
    
    TowerOfHanoi(n-1, start, destination, helper); //reursion 1
    cout<<start<<"->"<<destination<<endl;  // our work
    TowerOfHanoi(n-1,helper, start, destination); // recursion 2
}


int main() {  //calling function
    int n;
    cin>>n;
    TowerOfHanoi(n,'a','b','c');
    return 0;
}