#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i, p1, p2;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        p1=p2=-1;
        for(i=0; i<n; i++)
        {
            if(s[i]=='1') p2=i+1;
            if(s[i]=='1' && p1==-1) p1=i+1;
        }
        if(p1>-1) p1=n-p1+1;
        p1*=2;
        p2*=2;
        p1=max(p1, p2);
        if(p1<n)
            printf("%d\n", n);
        else printf("%d\n", p1);
    }
    return 0;
}
