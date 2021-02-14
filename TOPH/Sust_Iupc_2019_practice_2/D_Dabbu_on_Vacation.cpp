#include <bits/stdc++.h>
using namespace std;

const double pi=3.1416;
int main()
{
    double R, d, h, r, as, asl;
    int t, cs=1;

    cin>>t;
    while(t--)
    {
        cin>>R>>d>>h;
        R/=2;
        r=sqrt(R*R-((d-R)*(d-R)));

        asl= (pi*r*r*h);
        as=((4/3.0)*pi*R*R*R);
        cout<<as<<endl<<asl<<endl;
        if(as-asl<0.001)
            printf("Case %d: Yes\n", cs++);
        else printf("Case %d: No\n", cs++);
    }

    return 0;
}
