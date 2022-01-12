#include<iostream>
using namespace std;

void merge(int *ar, int s, int mid, int e){

	int i=s,j=mid+1,k=s;
	int temp[e];
	while(i<=mid && j<=e){
		if(ar[i]<ar[j]) temp[k++] = ar[i++];
		else temp[k++] = ar[j++]; 
	}

	while(i<=mid) temp[k++] = ar[i++];
	while(j<=e) temp[k++] = ar[j++];

	for(int i=s;i<=e;i++) ar[i] = temp[i];
}

void mergeSort(int *ar, int s, int e){
	if(s>=e) return;

	int mid = (s+e)/2;

	mergeSort(ar,s,mid);
	mergeSort(ar,mid+1,e);

	merge(ar,s,mid,e);
}
int main() {
	int N;
	cin>>N;
	int ar[N];
	for(int i=0;i<N;i++) cin>>ar[i];
	mergeSort(ar,0,N-1);
	for(int i=0;i<N;i++) cout<<ar[i]<<" ";
	return 0;
}
