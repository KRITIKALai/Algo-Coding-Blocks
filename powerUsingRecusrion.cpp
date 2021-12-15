//Rescursive implementation of power(a,n)

#include <iostream>
using namespace std;
int power(int a, int n){
    if(n==1 or n==0) return a;
    return a*power(a,n-1);
}

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}
