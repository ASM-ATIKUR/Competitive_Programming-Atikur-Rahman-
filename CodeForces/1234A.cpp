#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, n, a, sum;
    cin>>q;
    while(q--)
    {
        cin>>n;
        sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum%n==0) printf("%d\n", sum/n);
        else printf("%d\n", (sum/n)+1);
    }
    return 0;
}
