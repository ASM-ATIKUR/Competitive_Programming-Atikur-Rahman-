#include <bits/stdc++.h>
using namespace std;
long long m=1000000007;
long long ara[1000009];
int main()
{
    int n, t;
    ara[1]=1;
    for(long long i=2; i<=1000000; i++)
    {
        ara[i]= ((ara[i-1]%m)+(i%m)+((ara[i-1]%m)*(i%m))%m)%m;
        //printf("%d\n", ara[i]);
    }

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        printf("%d\n", ara[n]);
    }
    return 0;
}
