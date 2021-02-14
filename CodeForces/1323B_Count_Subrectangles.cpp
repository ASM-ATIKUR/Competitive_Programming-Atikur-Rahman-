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

#define For(a,n) for(int i=(a); i<(n); i++)
#define rFor(n,a) for(int i=n-1; i>=0; i--)
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

    int a[50000],b[50000];
    ll i,j,n,m,k;
    vector<ll> aa,bb,kk;
    scanf("%lld %lld %lld", &n, &m,&k);
    For(0,n) sci(a[i]);
    For(0,m) sci(b[i]);

    for(i=1;i*i<=k;i++)
    {
        if(k%i==0)
            kk.pb(i),kk.pb(k/i);
    }

    ll ans=0,x;
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]==0)
        {
            if(i-j) aa.pb(i-j);
            j=i+1;
        }
    }
    if(i-j) aa.pb(i-j);
    for(i=0,j=0;i<m;i++)
    {
        if(b[i]==0)
        {
            if(i-j) bb.pb(i-j);
            j=i+1;
        }
    }
    if(i-j) bb.pb(i-j);
    int nn,mm;
    nn=aa.size(),mm=bb.size();
    for(int l=0; l<kk.size();l+=2)
    {
        ll aaa=0,bbb=0;
        for(i=0;i<nn;i++)
        {
            if(aa[i]-kk[l]+1>0) aaa+=aa[i]-kk[l]+1;
            if(kk[l]!=kk[l+1])
            {
                if(aa[i]-kk[l+1]+1>0) aaa+=aa[i]-kk[l+1]+1;
            }
        }
        for(i=0;i<mm;i++)
        {
            pfll(bb[i]);ps;pfll(kk[l]);ps;pfll(kk[l+1]);pn;
            if(bb[i]-kk[l]+1>0) bbb+=bb[i]-kk[l]+1;
            if(kk[l]!=kk[l+1])
            {
                if(bb[i]-kk[l+1]+1>0) bbb+=bb[i]-kk[l+1]+1;
            }
            printf("%lld..\n", bbb);
        }
        printf("%lld...%lld..\n", aaa,bbb);
        ans+=aaa*bbb;

    }
//    for(i=0;i<nn;i++)
//    {
//        for(j=0;j<mm;j++)
//        {
//            for(int l=0; l<kk.size();l+=2)
//            {
//                int aaa,bbb;
//                aaa=aa[i]-kk[l]+1;
//                bbb=bb[j]-kk[l+1]+1;
//                if(aaa>0&&bbb>0) ans+=x;
//                if(kk[l]!=kk[l+1])
//                {
//                    aaa=aa[i]-kk[l+1]+1;
//                    bbb=bb[j]-kk[l]+1;
//                    if(aaa>0&&bbb>0) ans+=x;
//
//                }
//            }
//        }
//    }

    pfll(ans);pn;







    return 0;
}






















