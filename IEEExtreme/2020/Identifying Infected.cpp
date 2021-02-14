#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        vector< pair<double,int> > tot;
        int on=0,mon=0;
        while(n--)
        {
            double x,y;
            int a;
            scanf("%lf %lf %d", &x, &y, &a);

            double ang;
            if(abs(x)<0.000000001 && abs(y)<0.000000001) continue;
            if(abs(x)<0.0000000001)
            {
                if(y<0.0)
                    ang=270.0;
                else if(y>0.0) ang=90.0;
                else ang=0.0;
            }
            else
            {
                ang=atan(y/x)*180.0/PI;
                if(x<0 && y<0)
                {
                    ang+=180;
                }
                else if(x<0) ang+=180;
                else if(y<0) ang+=360;

            }
            tot.push_back(make_pair(ang,a));
            if(a==1) on++;
            else mon++;
        }
        if(tot.size()==0) {
            printf("YES\n");
            continue;
        }
        sort(tot.begin(),tot.end());
//        for(int i=0; i<tot.size(); i++)
//        {
//            printf("%f %d\n", tot[i].first,tot[i].second);
//        }
        int fg=tot[0].second;
        double pre=tot[0].first;
        int ans=0,cnt=0,x=0,i;
        double mn=400.0, mx=-400.0;
        for(i=1; i<tot.size(); i++)
        {
            x=0;
            mn=400.0, mx=-400.0;
            while(tot[i].second!=fg && i<tot.size())
            {
                mn=min(mn, tot[i].first);
                mx=max(mx, tot[i].first);
                i++;
                x++;
            }
            if(i>=tot.size()) break;
            if(x){
                cnt++;
                if(abs(pre-tot[i].first)>=180.0)
                {
                    if(mx-mn<=180.0)
                    ans=1;
                }
            }
            pre=tot[i].first;
        }
        if(x){
            cnt++;
            if(abs(360-pre+tot[0].first)>=180.0)
            {
                if(mx-mn<=180.0)
                ans=1;
            }
        }
        if(cnt==0)
        {
            if(mx-mn<=180) printf("YES\n");
            else printf("NO\n");
        }
        else if(ans && cnt<=1)
            printf("YES\n");
        else printf("NO\n");
    }

}
