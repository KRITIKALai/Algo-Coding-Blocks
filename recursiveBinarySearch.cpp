// Recursive implementation of Binary Search
#include <iostream>
using namespace std;
bool isPresent(int ar[], int s, int e, int val){
    int mid=(s+e)>>1;
    if(s<=e){
        if(ar[mid]==val)  return true;
        else if(ar[mid]<val) return isPresent(ar,mid+1,e,val);
        else return isPresent(ar,s,mid-1,val);
    }
    return false;
}
int main() {
    
    int ar[] = {1,5,9,12,13,17,18,19}; 
    int n = sizeof(ar)/sizeof(int);
    int val;
    cin>>val;
    cout<<isPresent(ar,0,n-1,val);
    return 0;
}
