#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n], i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    int x=1;
    sort(ara, ara+n);
    for(i=0; i<n; i++)
        if(ara[i]>=x)
            x++;

    cout<<--x<<endl;

    return 0;
}
