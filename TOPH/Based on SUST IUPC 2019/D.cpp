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
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)

#define mp make_pair
#define pb push_back
#define uu first
#define vv second
#define lb lower_bound
#define ub upper_bound

#define pi  (2*acos(0))

#define mod 1000000007ll
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



ll f(ll a,ll pow)
{
    ll ans=0,i,j,sum=0;
    for(i=1,j=1;i<=pow;++i)
    {
        ans=(ans+(j*i)%mod)%mod;
        sum+=j;
        j*=2;
    }
    ll rem=a-sum;
    printf("rem:%lld\n",rem);
    printf("i:%lld\n",i);
    ans=(ans+(rem*i)%mod)%mod;
    return ans;
}
int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);


    int q;
    scanf("%d",&q);
    while(q--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ll ans;
        ans=(f(r,log2(r))-f(l-1,log2(l-1)))%mod;
        printf("%lld\n",ans);
    }
    return 0;
}

























