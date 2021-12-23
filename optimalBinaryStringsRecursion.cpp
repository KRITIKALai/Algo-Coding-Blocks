/*
    Count Binary Strings of length N, which has no consecutive ones.
*/
#include <iostream>
using namespace std;

int countBinaryStrings(int n){
    //base case
    if(n==0 or n==-1) return 1;
    
    //recursive case
    return countBinaryStrings(n-1) + countBinaryStrings(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<countBinaryStrings(n); 
    return 0;
}
