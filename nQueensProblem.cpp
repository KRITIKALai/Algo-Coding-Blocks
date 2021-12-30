#include <iostream>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n){
    
    //cheacking for column
    for(int row=0;row<i;row++){
        if(board[row][j]) return false;
    }
    
    //checking for left diagonal
    int x=i-1,y=j-1;
    while(x>=0 && y>=0){
        if(board[x][y]) return false;
        x--;
        y--;
    }
    
    //checkig for right diagonal
    x=i-1,y=j+1;
    while(x>=0 && y<n){
        if(board[x][y]) return false;
        x--;
        y++;
    }
    return true;
}

bool solveNQueen(int board[][10], int i, int n){
    
    //base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]) cout<<"Q ";
                else cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    
    //recursive case
    for(int j=0;j<n;j++){
        if(isSafe(board,i,j,n)){
            //place queen assuming (i,j) as the right position
            board[i][j] = 1;
            bool canWeKeepNextQueen = solveNQueen(board,i+1,n);
            if(canWeKeepNextQueen) return true;
            //remove queen as (i,j) as the wrong position
            board[i][j] = 0;
        }
    }
    return false;
}

int main() {
    
    int n;
    cin>>n;
    int board[10][10] = {0};
    bool ans = solveNQueen(board,0,n);
    return 0;
}
