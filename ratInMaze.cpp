/*
    Given a maze mxn with Xs in between denoting blockades,
    we need to find all the paths that are possible between
    the start position (0,0) and end position (m-1,n-1).
*/

#include <iostream>

using namespace std;

bool ratInMaze(char maze[10][10], char soln[10][10], int i, int j, int m, int n, int *nPaths){

    //base case
    if(i==m && j==n){
        soln[m][n] = '1';
        //print the maze
        for(int row=0;row<=m;row++){
            for(int col=0;col<=n;col++){
                cout<<soln[row][col]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        *nPaths+=1;
        return true;
    }

    //conditions of boolean function

    //rat should stay inside the grid
    if(i>m || j>n) return false;

    //rat should avoid paths through Xs
    if(maze[i][j]=='X') return false;

    //assume solution exists through current cell
    soln[i][j] = '1';

    //recursive call through paths possible after moving right from the current position
    bool rightSuccess = ratInMaze(maze,soln,i,j+1,m,n,nPaths);
    bool downSuccess = ratInMaze(maze,soln,i+1,j,m,n,nPaths);

    //backtrack for finding new solutions
    soln[i][j] = '0';

    if(rightSuccess || downSuccess) return true;

    return false;
}

int main()
{
    char maze[10][10] = {
                          "0000",
                          "00X0",
                          "000X",
                          "0X00"
                                };

    char soln[10][10] = {
                          "0000",
                          "00X0",
                          "000X",
                          "0X00"
                                };


    //char soln[10][10] = {0};
    int m=4,n=4,nPaths=0;

    bool ans = ratInMaze(maze,soln,0,0,m-1,n-1,&nPaths);

    if(ans==false) cout<<"Path does not exist!!"<<endl;
    else cout<<"Number of possible paths = "<<nPaths<<endl;
    return 0;
}
