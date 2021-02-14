#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int k, sum=0;
    int ara[13];
    scanf("%d", &k);
    for(int i=0; i<12; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+12);
    for(int i=11; i>=0; i--)
    {
        if(sum>=k)
        {
            printf("%d\n", 11-i);
            return 0;
        }
        else
        {
            sum+=ara[i];
        }
    }
    if(sum>=k) printf("12\n");
    else printf("-1\n");
    return 0;
}
