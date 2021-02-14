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


bool cmp(pii a, pii b)
{
    if(a.ss==1) return false;
    if(a.ff<b.ff) return true;
    if(a.ff>b.ff) return false;

    if(a.ss>b.ss) return true;
    return false;
}

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    vector<pii>od, ev;
    int n, ans=0, ara[1002], x,i,ocnt=0,ecnt=0,od1=0,ev1=0,od2=0,ev2=0;
    sci(n);
    ecnt=n/2;
    ocnt=n-ecnt;
    for(i=1; i<=n; i++)
    {
        sci(ara[i]);
        if(ara[i]>0)
        {
            if(ara[i]%2) ocnt--;
            else ecnt--;
        }
    }
    if(n==1)
    {
        pfi(0),pn;
        return 0;
    }
    int pre=0;
    for(i=1; i<=n; i++)
    {
        if(ara[i])
        {
            if(pre==0)
            {
                if(ara[i]%2) od.pb({i-1,1});
                else ev.pb({i-1,1});
            }
            else
            {
                if(ara[pre]%2==ara[i]%2)
                {
                    if(ara[i]%2)
                    {
                        od.pb({i-pre-1,2});
                    }
                    else ev.pb({i-pre-1,2});
                }
                else ans++;
            }
            pre=i;
        }
    }
    if(ara[pre]%2) od.pb({i-pre-1,1});
    else ev.pb({i-pre-1,1});

    //printf("%d...\n", ans);
    sort(od.begin(),od.end(),cmp);
    sort(ev.begin(),ev.end(),cmp);
//    printf("%d####%d\n", ocnt,ecnt);
//    for(i=0; i<od.size(); i++)
//    {
//        printf("%d %d..\n", od[i].ff,od[i].ss);
//    }
//    for(i=0; i<ev.size(); i++)
//    {
//        printf("%d %d\n", ev[i].ff,ev[i].ss);
//    }

    for(i=0; i<od.size(); i++)
    {
        if(od[i].ff>ocnt)
        {
            if(od[i].ss==1) ans++;
            else ans+=2;
//            if(ocnt>0)
//            {
//                ecnt+=ocnt;
//                ocnt=-od[i].ff;
//            }
//            else ecnt-=od[i].ff;

        }
        else ocnt-=od[i].ff;
    }
    for(i=0; i<ev.size(); i++)
    {
        if(ev[i].ff>ecnt)
        {
            if(ev[i].ss==1) ans++;
            else ans+=2;
//            if(ecnt>0)
//            {
//                ocnt+=ecnt;
//                ecnt-=ev[i].ff;
//            }
//            else ocnt-=ev[i].ff;
        }
        else ecnt-=ev[i].ff;
    }
//    if(od1)
//    {
//        if(od1>ocnt) ans++;
//    }
//    if(od2)
//    {
//        if(od2>ocnt) ans++;
//    }
//    if(ev1)
//    {
//        if(ev1>ecnt) ans++;
//    }
//    if(ev2)
//    {
//        if(ev2>ecnt) ans++;
//    }

    pfi(ans);pn;
    return 0;
}


























