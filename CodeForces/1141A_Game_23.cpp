#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, cnt=0, a, i;
    cin>>n>>m;

    for(i=2; i<=sqrt(n);)
    {
        if(n%i==0)
        {
            n/=i;
            if(m%i)
            {
                printf("-1\n");
                return 0;
            }
            m/=i;
        }
        else i++;
    }
    if(m%n)
    {
        printf("-1\n");
        return 0;
    }
    else m/=n;
    if(i==sqrt(n))
    {
        if(m%n==2 || m%n==3)
            cnt=1;
    }
    else
    {
        while(m>1)
        {
            if(m%2==0)
                m/=2;
            else if(m%3==0) m/=3;
            else{
                cnt=-1;
                break;
            }

            cnt++;
        }


    }

    cout<<cnt<<"\n";

    return 0;
}
