#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[100009],ar[100009], n, i, l=0, r=0, fg=0, afg=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        ar[i]=ara[i];
    }
    sort(ar, ar+n);
    for(i=0; i<n; i++)
    {
        if(ara[i]!=ar[i])
        {
            if(!fg)
            {
                l=i+1;
                fg++;
            }
            else
                r=i+1;
            afg++;
        }
    }
    if(afg==0)
    {
        printf("yes\n1 1\n");
        return 0;
    }

    reverse(ara+l-1, ara+r);
    for(i=1; i<n; i++)
    {
        if(ara[i]<ara[i-1])
            afg=-1;
    }
    if(afg==-1)
        printf("no\n");
    else printf("yes\n%d %d\n", l, r);

    return 0;
}
