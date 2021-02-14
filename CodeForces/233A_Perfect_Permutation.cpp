#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    if(n%2)
        printf("-1\n");
    else
    {
        for(i=n; i>0; i--)
        {
            if(i==1)
                printf("%d\n", i);
            else printf("%d ", i);
        }
    }
    return 0;
}
