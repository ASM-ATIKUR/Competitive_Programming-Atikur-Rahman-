#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, nm, cnt=0;
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        nm=s[i]-'0';
        if(!(nm%2))
        {
            cnt+=i+1;
        }
    }

    cout<<cnt<<"\n";

    return 0;
}
