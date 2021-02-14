#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt=0;
    cin>>n>>m;

    if(m%n==0)
    {
        m/=n;

        while(m>1)
        {
            if(m%2==0)
                m/=2;
            else if(m%3==0)
                m/=3;
            else
            {
                cnt=-1;
                break;
            }
            cnt++;
        }
    }
    else{
        cnt=-1;
    }
    cout<<cnt<<"\n";

    return 0;
}

