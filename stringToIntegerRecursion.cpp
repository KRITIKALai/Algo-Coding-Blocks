#include <iostream>
using namespace std;
int stringToInt(string s,int n){
    if(n==0) return 0;
    int val = s[n-1]-'0';
    int smallAns = stringToInt(s,n-1);
    return (smallAns*10)+val;
}
int main() {
    string s;
    cin>>s;
    cout<<s+"1"<<endl;
    cout<<stringToInt(s,s.length())+1;
    return 0;
}
