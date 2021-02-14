#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cn;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        char str[n+5];
        cn=0;
        scanf("%s", str);
        for(int i=0; i<n; i++)
        {
            if(str[i]=='8')
                break;
            cn++;
        }
        if(n-cn>=11)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
