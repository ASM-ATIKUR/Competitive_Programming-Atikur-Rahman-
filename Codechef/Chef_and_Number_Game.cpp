#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t, n, a, a1=0, a2=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a1=0;
        a2=0;
        while(n--)
        {
            cin>>a;
            if(a>0)
                a1++;
            else a2++;
        }
        if(a1==0)
            cout<<a2<<" "<<a2<<"\n";
        else if(a2==0)
            cout<<a1<<" "<<a1<<"\n";
        else if(a1>a2)
            cout<<a1<<" "<<a2<<"\n";
        else if(a1<a2)
            cout<<a2<<" "<<a1<<"\n";
        else cout<<a2<<" "<<a2<<"\n";
    }
    return 0;
}
