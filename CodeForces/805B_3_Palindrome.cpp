#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag=1, cnt=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(flag)
        {
            cout<<'a';
            cnt++;
            if(cnt==2)
            {
                flag=0;
                cnt=0;
            }
        }
        else
        {
            cout<<'b';
            cnt++;
            if(cnt==2)
            {
                flag=1;
                cnt=0;
            }
        }
    }
    cout<<"\n";

    return 0;
}
