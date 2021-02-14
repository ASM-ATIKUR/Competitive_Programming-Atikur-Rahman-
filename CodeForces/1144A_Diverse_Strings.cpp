#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char str[110];
    cin>>n;
    while(n--)
    {
        cin>>str;
        int l=strlen(str), i;
        sort(str, str+l);
        for(i=0; i<l-1; i++)
        {
            if(str[i]+1 !=str[i+1])
                break;
        }
        if(i==l-1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
