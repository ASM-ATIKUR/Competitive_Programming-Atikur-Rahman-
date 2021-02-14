#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h, u, d, f;
    while(true)
    {
        cin>>h>>u>>d>>f;
        if(h-0.0<0.000000001)
            break;
        double in=0, uu=((u*f)/100.0);
        int cnt=0;
        while(true)
        {
            //printf("%f...\n", in);
            cnt++;
            in=in+u;
            if(u>0) u-=uu;
            if(in>h) {printf("success on day %d\n", cnt);break;}
            in=in-d;
            if(in<0) {printf("failure on day %d\n", cnt);break;}
        }
    }

    return 0;
}
