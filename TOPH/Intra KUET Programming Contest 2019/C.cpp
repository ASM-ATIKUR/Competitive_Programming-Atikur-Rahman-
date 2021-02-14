#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k, dif, tmp;
    cin>>a>>b>>k;
    tmp=a;
    a=max(a,b);
    b=min(tmp,b);

    dif=a-b;

    if(dif>k)
    {
        cout<<(b+k)*a<<endl;
    }
    else
    {
        k-=dif;
        cout<<(a+(k/2))*(a+(k-(k/2)))<<endl;
    }

    return 0;
}
