/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<map>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<string>
#include<utility>
#include<stack>
#include<cstring>
#include<iterator>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sci(x) scanf("%d%*c", &(x))
#define scll(x) scanf("%lld%*c", &(x))
#define scd(x) scanf("%lf%*c", &(x))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfll(x) printf("%lld", (x))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define pn printf("\n")
#define pfdot printf("..")

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)
#define Mset0(ara, val) memset(ara, val, sizeof(ara))

#define mkp make_pair
#define pb push_back
#define f first
#define s second
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


vector<pll>sb(200200);
vector<pll> v(200200);

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll t, n, tt, a,b,i;
    scll(t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld", &n, &tt, &a, &b);
        for(i=0; i<n; i++)
            scll(v[i].s);
        for(i=0;i<n; i++)
            scll(v[i].f);
        sort(v.begin(),v.end());
        sb[0].f=sb[0].s=0;
        if(v[0].s==0)
                sb[0].f++;
            else sb[0].s++;
        for(i=1; i<n; i++)
        {
            sb[i].s=sb[i-1].s;
            sb[i].f=sb[i-1].f;
            if(v[i].s==0)
                sb[i].f++;
            else sb[i].s++;
        }

        ll ss=0, bs=0,tm=tt,ans=0;
        for(i=0; i<n; i++)
        {
            if(v[i].s==0)
            {
                if(a<=tm)
                {
                    tm-=a;
                    ll tmm=tm;
                    if(i<n-1) tmm=min(tmm, v[i+1].f-v[i].f);
                    ll x=sb[i].f+sb[i].s;
                    ll ps, pk;
                    ps=sb[n-1].f-sb[i].f;
                    pk=sb[n-1].s-sb[i].s;
                    ll pss, pkk;
                    pss=tmm/a;
                    if(pss>ps)
                    {
                        x+=ps;
                        pkk=(tmm-(ps*a))/b;
                        if(pkk>pk)
                            x+=pk;
                        else x+=pkk;
                    }
                    else x+=pss;
                    ans=max(ans, x);
                }
                else break;
            }
            else
            {
                if(b<=tm)
                {
                    tm-=b;
                    ll tmm=tm;
                    if(i<n-1) tmm=min(tmm, v[i+1].f-v[i].f);
                    ll x=sb[i].f+sb[i].s;
                    ll ps, pk;
                    ps=sb[n-1].f-sb[i].f;
                    pk=sb[n-1].s-sb[i].s;
                    ll pss, pkk;
                    pss=tmm/a;
                    if(pss>ps)
                    {
                        x+=ps;
                        pkk=(tmm-(ps*a))/b;
                        if(pkk>pk)
                            x+=pk;
                        else x+=pkk;
                    }
                    else x+=pss;
                    ans=max(ans, x);
                }
                else break;
            }
        }
        pfll(ans);pfdot;pn;

    }


    return 0;
}

























