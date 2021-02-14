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
#include<bitset>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cassert>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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

bitset<10000100> mark;
vector<ll> primes;
void seive(ll n)
{
    ll i,j;
    primes.pb(2);
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            for(j=i*i; j<=n; j+=i)
            {
                mark[i]=1;
            }
            primes.pb(i);
        }
    }
}

void factor(ll n)
{
    vector<ll>lst;
    for(ll i=0; primes[i]*primes[i]<=n && i<primes.size(); i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {   n/=primes[i];
            }
            lst.pb(primes[i]);
        }
    }
    if(n>1)
        lst.pb(n);
    if(lst.size()>1) printf("%lld\n", lst[lst.size()-1]);
    else pfi(-1),pn;
}


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    seive(10000007);
    ll n;
    while(1)
    {
        scll(n);
        n=abs(n);
        if(n==0) break;
        factor(n);
    }





    return 0;
}






















