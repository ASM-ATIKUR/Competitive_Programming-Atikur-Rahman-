#include <bits/stdc++.h>
using namespace std;
long long arr[101][101];
void ncr(void)
{
    long long i, j;
    for(i=1; i<=100; i++)
    {
        arr[i][1]=i;
        for(j=2; j<i; j++)
        {
            arr[i][j]= arr[i-1][j-1]+arr[i-1][j];
        }
        arr[i][j]=1;
    }
}
int main()
{
    long long n, r;
    while(true)
    {
        cin>>n>>r;
        if(n==r && r==0) break;
        ncr();
        printf("%lld things taken %lld at a time is %lld exactly.\n", n, r, arr[n][r]);
    }

    return 0;
}
