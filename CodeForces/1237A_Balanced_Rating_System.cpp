#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ara[100000], i, fg=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]%2)
        {
            if(fg)
            {
                printf("%d\n", ara[i]/2);
                fg=0;
            }
            else
            {
                printf("%d", ara[i]/2+1);
                fg=1;
            }
        }
        else printf("%d\n", ara[i]/2);
    }
    return 0;
}
