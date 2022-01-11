#include<iostream>
#include<string>
using namespace std;

void moveAtEnd(string s, int i, int l){
	if(i>=l) return;

	//current character
	char ch = s[i];

	if(ch != 'x') cout<<ch;

	moveAtEnd(s,i+1,l);

	if(ch == 'x') cout<<ch;
}
int main() {
	string s;
	cin>>s;
	moveAtEnd(s,0,s.length());
	return 0;
}
