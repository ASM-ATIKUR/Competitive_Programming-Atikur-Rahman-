#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n], i, j, sum=0, sumn=0;

    for(i=1; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sumn= (n*(n+1))/2;
    ara[0]=(sumn-sum)/n;
    cout<<ara[0];

    return 0;
}
