#include <bits/stdc++.h>
using namespace std;
int fg,n;
char a[5][200009];
void pani(int pre, int x, int y)
{
    //printf("%d %d......\n", x, y);
    if(x==2 && y==n+1)
    {
        fg=1;
        return;
    }
    else if(x>2 || y>n) return;

    if(a[x-1][y-1]=='1' || a[x-1][y-1]=='2')
    {
        if(pre==1)
        {
            pani(1, x, y+1);
        }
        else return;
    }
    else
    {
        if(pre==1)
        {
            if(x==1)
            {
                pani(2, x+1, y);
            }
            else pani(3, x-1, y);
        }
        else if(pre==2)
        {
            if(x==1)
                return;
            else pani(1, x, y+1);
        }
        else if(pre==3)
        {
            if(x==2) return;
            else pani(1, x, y+1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a[0];
        cin>>a[1];
        fg=0;
        pani(1, 1, 1);
        if(fg) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
