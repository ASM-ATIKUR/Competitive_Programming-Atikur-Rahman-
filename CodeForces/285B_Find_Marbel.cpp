#include <bits/stdc++.h>
using namespace std;

int ara[100009], arr[100009];
int main()
{
    int n, s, t,i, fg=0, cnt=0;
    cin>>n>>s>>t;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }
    i=s;
    while(true)
    {
        if(s==t) {fg=1; break;}
        if(ara[i]==t) {fg=1;cnt++; break;}
        if(ara[i]==s)
            break;
        i=ara[i];
        cnt++;
    }
    if(fg) cout<<cnt<<endl;
    else printf("-1\n");
    return 0;
}

