#include<iostream>
using namespace std;

bool isSorted(int ar[], int n, int i){
	//base case
	if(i==n){
		return true;
	}
	//rec case
	if(ar[i]<=ar[i+1]){
		if(isSorted(ar,n,i+1)) return true;
	}
	return false;
}
int main() {
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	if(isSorted(ar,n,0)) cout<<"true";
	else cout<<"false";
	return 0;
}
