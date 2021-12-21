#include <iostream>
using namespace std;
void numberToString(int N){
    if(N==0){
        return;
    }
    numberToString(N/10);
    int val=N%10;
    if(val==1) cout<<"One ";
    else if(val==2) cout<<"Two ";
    else if(val==3) cout<<"Three ";
    else if(val==4) cout<<"Four ";
    else if(val==5) cout<<"Five ";
    else if(val==6) cout<<"Six ";
    else if(val==7) cout<<"Seven ";
    else if(val==8) cout<<"Eight ";
    else if(val==9) cout<<"Nine ";
    else if(val==0) cout<<"Zero ";
}
int main() {
    int N;
    cin>>N;
    numberToString(N);
    return 0;
}
