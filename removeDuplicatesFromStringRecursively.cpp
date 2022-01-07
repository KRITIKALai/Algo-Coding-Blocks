#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s){
	//base case
	if(s.length()==1){
		return s;
	}
	//rec case
	string remString = removeDuplicates(s.substr(1));
	if(s[0]==remString[0]) return remString;
	return s[0]+remString;
}
int main() {
	string s;
	cin>>s;
	cout<<removeDuplicates(s);
	return 0;
}
