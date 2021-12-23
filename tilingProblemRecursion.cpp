/*
    Given a wall of size 4,N and tiles of size 1,4 & 4,1
    In how many ways can you build the wall?
*/
#include <iostream>
using namespace std;

int tilingProblem(int n){
    //base case
    if(n<=3) return 1;
    
    //recursive case
    return tilingProblem(n-1)+tilingProblem(n-4);
}

int main() {
    int n;
    cin>>n;
    cout<<tilingProblem(n); 
    return 0;
}
