/***
 **   A S M Atikur Rahman
 **   Update: 27-11-2019
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
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)

#define mp make_pair
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




int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    int n, ara[200100], i, ans=1, cnt=1;
    vector<int>pos;
    sci(n);
    for(i=0; i<n; i++)
    {
        sci(ara[i]);
    }
    int fg=1;
    for(i=0; i<n-1; i++)
    {
        if(cnt==1)
        {
            if(ara[i+1]>ara[i])
                cnt=2;
        }
        else {
        if(ara[i+1]<=ara[i])
        {
            if(ara[i+1]<=ara[i-1])
            {
                ans=max(cnt,ans);
                cnt=1;
            }
        }
        else cnt++;
        }
    }
    ans=max(cnt, ans);




















//    if(ara[0]>ara[1]) pos.pb(0);
//    for(i=1; i<n-1; i++)
//    {
//        if(ara[i]>ara[i-1] && ara[i]>ara[i+1])
//            pos.pb(i);
//    }
//    if(ara[n-1]<ara[n-2]) pos.pb(n-1);
//
//    int l=pos.size(), ans=INT_MIN;
//    pfi(l);pn;
//    if(l==0) ans=n;
//    else if(l==1) ans=n-1;
//    else if(l==2)
//    {
//        ans=max(ans, pos[1]);
//        ans=max(ans,n-pos[1]);
//        ans=max(ans, pos[0]);
//        ans=max(ans,n-pos[0]);
//    }
//    for(i=0; i<l-2; i++)
//    {
//        int d=pos[i+2]-pos[i]-2;
//        ans=max(ans,d);
//    }
    printf("%d\n", ans);

    return 0;
}

























