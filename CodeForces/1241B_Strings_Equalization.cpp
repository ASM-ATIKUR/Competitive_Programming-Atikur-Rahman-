#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int i, ara[30], t, fg;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(i=0; i<30; i++)
            ara[i]=0;
        fg=0;
        int l=a.length();
        for(i=0; i<l; i++)
        {
            ara[a[i]-'a']=1;
        }
        l=b.length();
        for(i=0; i<l; i++)
        {
            if(ara[b[i]-'a']) fg=1;
        }
        if(fg) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
