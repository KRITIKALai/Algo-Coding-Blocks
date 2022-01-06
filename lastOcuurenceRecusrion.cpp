#include<iostream>
using namespace std;

int lastOccurence(int ar[],int N,int M){
	//base case
	if(N==-1){
		return -1;
	}
	//rec case
	if(ar[N-1]==M){
		return N-1;
	}
	return lastOccurence(ar,N-1,M);

}
int main() {
	int N,M;
	cin>>N;
	int ar[N];
	for(int i=0;i<N;i++) cin>>ar[i];
	cin>>M;
	cout<<lastOccurence(ar,N,M);
	return 0;
}
