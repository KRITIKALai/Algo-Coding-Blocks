/*
    given array of numbers as characters we need to find all
    possible strings from the array [1234]. In this case there
    are 3 strings possible [ABCD], [AWD], [LCD].
*/

#include <iostream>

using namespace std;

void genStrings(char *num, char *op, int i, int j){
    //base case
    if(num[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }

    //rec case
    int digit, secondDigit, val;
    char ch;
    //stand alone case
    digit = num[i]-'0';
    if(digit>0){
        ch = digit + 'A' - 1;
        op[j] = ch;
        genStrings(num,op,i+1,j+1);
    }

    //combined case
    if(num[i+1]!='\0'){
        secondDigit = num[i+1]-'0';
        val = digit*10 + secondDigit;
        if(val<=26){
            ch = val + 'A' - 1;
            op[j] = ch;
            genStrings(num,op,i+2,j+1);
        }
    }
    return;
}

int main()
{
    char num[100], op[100];
    cin>>num;
    genStrings(num,op,0,0);
    return 0;
}
