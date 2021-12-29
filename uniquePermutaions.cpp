#include <iostream>
#include <set>
#include <string>

using namespace std;

void uniquePermutation(char a[], int i, set<string> &s){

    //base case
    if(a[i]=='\0'){
        string t(a);
        s.insert(t);
        return;
    }

    //recurring case
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        uniquePermutation(a,i+1,s);
        swap(a[i],a[j]);
    }
}

int main()
{
    char a[100];
    cin>>a;
    set<string> s;
    uniquePermutation(a,0,s);

    for(auto x: s) cout<<x<<endl;

    return 0;
}
