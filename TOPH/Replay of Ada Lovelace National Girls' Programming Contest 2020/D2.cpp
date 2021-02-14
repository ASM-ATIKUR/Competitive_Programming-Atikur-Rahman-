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


ll h[200100], g[200100], l[200100], r[200100];

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll n, i, j, x,q;
    scll(n);
    For(1,n+1) scll(h[i]),scll(g[i]);
    l[1]=g[1];
    r[n]=g[n];
    ll val=g[1];
    for(i=2,j=1;i<=n;i++)
    {
        if(h[i]>h[i-1])
        {
            ll s=0;
            while(j<i)
            {
                printf("%lld %lld..\n", j,s);
                s+=g[j];
                if(h[j-1]>h[j])
                {
                    val-=s;
                }
                else if(h[j-1]==h[j]) s+=g[j];
                else s=g[j];
                r[j]=val;
                j++;
            }
            val=g[i];
        }
        else
        {
            val+=g[i];
        }
    }
    ll s=g[j];
    while(j<i)
    {
        if(h[j-1]>h[j])
                {
                    val-=s;
                }
                else if(h[j-1]==h[j]) s+=g[j];
                else s=g[j];
                r[j]=val;
                j++;
    }
    val=g[n];
    for(i=n-1, j=n;i>0;i--)
    {
        if(h[i]>h[i+1])
        {
            ll s=g[j];
            while(j<i)
            {

                if(h[j+1]>h[j])
                {
                    val-=s;
                }
                else if(h[j+1]==h[j]) s+=g[j];
                else s=g[j];
                l[j]=val;
                j--;
            }
        }
        else
        {
            val+=g[i];
        }
    }
    s=g[j];
    while(j<i)
    {
        if(h[j+1]>h[j])
                {
                    val-=s;
                }
                else if(h[j+1]==h[j]) s+=g[j];
                else s=g[j];
                l[j]=val;
                j--;
    }

    For(1,n+1) printf("%lld ", r[i]);
    pn;

    scll(q);
    while(q--)
    {
        scll(x);
        pfll(max(l[x],r[x]));pn;
    }






    return 0;
}






















