/*
    Given N friends who want to go on a party on bikes.
    Each guy can go as a single or a couple.
    Find the number of ways in which N friends can go to a party.
*/
#include <iostream>
using namespace std;

int friendsProblem(int n){
    //base case
    if(n==0 or n==1) return 1;
    
    //recursive case
    return friendsProblem(n-1) + ((n-1)*friendsProblem(n-2));
}

int main() {
    int n;
    cin>>n;
    cout<<friendsProblem(n); 
    return 0;
}
