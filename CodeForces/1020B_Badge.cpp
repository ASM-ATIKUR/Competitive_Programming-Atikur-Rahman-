#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, j, ara[1001], i, chk[1001]={0}, ans;
    cin>>n;

    for(i=1; i<=n; i++) cin>>ara[i];

    for(i=1; i<=n; i++)
    {
        j=i;
        while(chk[j]!=i)
        {
            chk[j]=i;
            j=ara[j];
        }
        cout<<j<<" ";
    }

    return 0;

}
