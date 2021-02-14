#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long q, n, a, b;
    cin>>q;

    while(q--)
    {
        cin>>n>>a>>b;

        if(a*2<b)
        {
            cout<<a*n<<endl;
        }
        else
        {
            cout<<(n/2)*b+(n%2)*a<<endl;
        }
    }

    return 0;
}
