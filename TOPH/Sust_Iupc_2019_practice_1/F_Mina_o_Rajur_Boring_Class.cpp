#include <bits/stdc++.h>
using namespace std;

const double ml=0.21460175;
int main()
{
    long long fib[36];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<36; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }


    int t, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        double ans=0;
        for(int i=n; i>0; i--)
        {
            ans+= fib[i]*fib[i]*ml;
        }
        printf("%.2f\n", ans);
    }

    return 0;
}
