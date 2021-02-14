#include <bits/stdc++.h>
using namespace std;

int main()
{
    char grid[4][4], c;
    int i, j, dcnt=0, zcnt=0, xcnt=0, xf=0, zf=0, flag=0;
    for(i=0; i<3; i++)
    {
        cin>>grid[i];
        for(j=0; j<3; j++)
        {
            //grid[i][j]=getchar();
            c=grid[i][j];
            if(c=='X')
                xcnt++;
            else if(c=='0')
                zcnt++;
            else dcnt++;
        }
    }

    //cout<<xcnt<<zcnt<<dcnt<<endl;
    if((xcnt-zcnt)>1 || xcnt>5 || zcnt>4 || xcnt<zcnt)
    {
        cout<<"illegal\n";
        return 0;
    }

    if(dcnt==0)
    {
        for(i=0; i<3; i++)
        {
            if(grid[i][0]=='X' && grid[i][1]=='X' && grid[i][2]=='X' && !flag){
               // cout<<"the first player won\n";
                flag=1;
            }
            if(grid[i][0]=='0' && grid[i][1]=='0' && grid[i][2]=='0' && flag==0){
                //cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }
        for(i=0; i<3; i++)
        {
            if(grid[0][i]=='X' && grid[1][i]=='X' && grid[2][i]=='X' && !flag){
                //cout<<"the first player won\n";
                flag=1;
            }
            if(grid[0][i]=='0' && grid[1][i]=='0' && grid[2][i]=='0' && flag==0){
                //cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }

        if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
        {
            if(grid[0][0]=='X' && !flag)
            {
                //cout<<"the first player won\n";
                flag=1;
            }
            else if(grid[0][0]=='0'&& !flag)
            {
                //cout<<"the second player won\n";
                flag =2;
            }
            else flag=-1;
        }
        if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
        {
            if(grid[0][2]=='X' && !flag)
            {
                //cout<<"the first player won\n";
                flag=1;
            }
            else if(grid[0][2]=='0' && !flag)
            {
                //cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }
    }
    if(dcnt>0)
    {
        for(i=0; i<3; i++)
        {
            if(grid[i][0]=='X' && grid[i][1]=='X' && grid[i][2]=='X' && !flag){
               // cout<<"the first player won\n";
                flag=1;
            }
            if(grid[i][0]=='0' && grid[i][1]=='0' && grid[i][2]=='0' && flag==0){
                //cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }
        for(i=0; i<3; i++)
        {
            if(grid[0][i]=='X' && grid[1][i]=='X' && grid[2][i]=='X' && !flag){
               // cout<<"the first player won\n";
                flag=1;
            }
            if(grid[0][i]=='0' && grid[1][i]=='0' && grid[2][i]=='0' && flag==0){
               // cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }

        if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
        {
            if(grid[0][0]=='X' && !flag)
            {
                //cout<<"the first player won\n";
                flag=1;
            }
            else if(grid[0][0]=='0'&& !flag)
            {
                //cout<<"the second player won\n";
                flag =2;
            }
            else flag=-1;
        }
        if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
        {
            if(grid[0][2]=='X' && !flag)
            {
                //cout<<"the first player won\n";
                flag=1;
            }
            else if(grid[0][2]=='0' && !flag)
            {
                //cout<<"the second player won\n";
                flag=2;
            }
            else flag=-1;
        }

        if(xcnt==zcnt && xcnt!=3 && !flag)
            {cout<<"first\n";return 0;}
        else if(!flag) {cout<<"second\n";return 0;}

    }
    if(flag=0) cout<<"draw\n";
    else if(flag==1) cout<<"the first player won\n";
    else if(flag==2) cout<<"the second player won\n";
    else cout<<"illegal\n";
    return 0;
}
