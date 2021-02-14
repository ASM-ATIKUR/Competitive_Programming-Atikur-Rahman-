#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag=1, cnt=0;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin>>ara[i];

    for(int i=1; i<n; i++)
    {
        if(ara[i]==3 && ara[i-1]==2 || ara[i]==2 && ara[i-1]==3)
        {
            flag=0;
            //break;
        }
        else if(ara[i]==1)
        {
            if(ara[i-1]==2)
            {
                cnt+=3;
            }
            else cnt+=4;


        }
        else if(ara[i]==2)
        {
            cnt+=3;
            if(i-2>=0 && ara[i-2]==3)
                cnt--;
        }
        else
        {
            cnt+=4;
        }
    }
    if(flag)
    {
        printf("Finite\n%d\n", cnt);
    }
    else printf("Infinite\n");

    return 0;
}
