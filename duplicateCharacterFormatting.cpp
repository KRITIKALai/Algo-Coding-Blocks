#include<iostream>
#include<string>
using namespace std;
string dcf(string s) {

	//base case
	if(s.length()<=1){
		return s;
	}

	//rec case
	string restOfString = dcf(s.substr(1));
	if(s[0]==restOfString[0]){
		return s[0] + string("*") + restOfString;
	}
	return s[0] + restOfString;
}

int main() {
	string s;
	cin>>s;
	string ans = dcf(s);
	cout<<ans;
	return 0;
}
