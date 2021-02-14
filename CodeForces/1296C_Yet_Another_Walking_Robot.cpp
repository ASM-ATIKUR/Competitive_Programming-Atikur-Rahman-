/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<time.h>
#include<limits.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cassert>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sci(x) scanf("%d%*c", &(x))
#define scll(x) scanf("%lld%*c", &(x))
#define scd(x) scanf("%lf%*c", &(x))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfll(x) printf("%lld", (x))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)
#define Mset(ara, val) memset(ara, val, sizeof(ara))

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define pi  (2*acos(0))


using namespace std;

using ll=long long;
using pii= pair<int,int>;
using pll= pair<long long, long long>;
using pcc= pair<char, char>;
using pdd= pair<double, double>;

#define V(a) vector<a>
using vi= vector<int>;
using vs= vector<string>;
using vll= vector<ll>;
using vpii= vector<pii>;
using vc= vector<char>;
using vd= vector<double>;

//ll POW(ll a,ll b){if(b==0)return 1;ll x=POW(a,b/2);x=(x*x);if(b&1)x=(x*a);return x;}




int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    int x,y, cnt, a,b, fx, fy,t,n,i,j;
    char str[200100];

    sci(t);
    while(t--)
    {
        sci(n);
        scanf("%s", str);
        vector<pair<pii,int>> v;
        fx=fy=0;
        for(i=0; i<n; i++)
        {
            if(str[i]=='L') fx--;
            else if(str[i]=='R') fx++;
            else if(str[i]=='U') fy++;
            else fy--;

            v.pb({{fx,fy},i+1});
        }
        v.pb({{0,0},0}),n++;
        sort(v.begin(),v.end());
        int a=-100000000,b=0;
        for(i=0; i<n; i++)
        {
            //printf("%d %d %d..\n", v[i].ff.ff, v[i].ff.ss, v[i].ss);
            if(v[i].ff.ff==v[i-1].ff.ff && v[i].ff.ss==v[i-1].ff.ss)
            {
                if(v[i].ss-v[i-1].ss<b-a)
                {
                    a=v[i-1].ss;
                    b=v[i].ss;
                }
            }
        }
        if(b>0)
        {
            pfi(a+1),ps,pfi(b),pn;
        }

        else pfi(-1),pn;





//        x=y=fx=fy=cnt=0;
//        a=-100000000;
//        b=0;
//        for(i=0; i<n; i++)
//        {
//            if(str[i]=='L') fx--;
//            else if(str[i]=='R') fx++;
//            else if(str[i]=='U') fy++;
//            else fy--;
//        }
//
//        for(i=0; i<n; i++)
//        {
//            if(str[i]=='L') x--;
//            else if(str[i]=='R') x++;
//            else if(str[i]=='U') y++;
//            else y--;
//
//            if(x==fx && y==fy)
//            {
//                //printf(" %d %d.. %d %d -- %d %d %d\n", x,y, fx, fy, a, b, i);
//                if(cnt==0)
//                {
//                    b=i;
//                    a=0;
//                }
//                else if(i-b<b-a+1)
//                {
//                    a=b+1;
//                    b=i;
//                }
//                cnt++;
//                //printf(" %d %d.. %d %d -- %d %d %d\n", x,y, fx, fy, a, b, i);
//            }
//        }
//        if(cnt>1)
//        {
//            pfi(a+1),ps,pfi(b+1),pn;
//        }
//        else
//        {
//            if(fx==fy&& fx==0)
//                pfi(a+1),ps,pfi(b+1),pn;
//            else pfi(-1),pn;
//        }

    }






    return 0;
}





















