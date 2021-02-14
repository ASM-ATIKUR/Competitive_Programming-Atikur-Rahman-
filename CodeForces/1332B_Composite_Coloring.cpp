/***
 **   A S M Atikur Rahman
 **   Update: 26-03-2020
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
#define trav(a,x) for (auto &a : x)
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
//ll Sqrt(ll a) { ll x=(ll)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }



int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    int t, n, ara[100100], i,j, clr=0,c, primes[12] {2,3,5,7,11,13,17,19,23,29,31};
    sci(t);
    while(t--)
    {
        sci(n);
        clr=0;
        int ans[100100] {0}, cll[22] {0};
        For(0,n) sci(ara[i]);
        set<int> st;
        for(i=0; i<n; i++)
        {
            for(j=0; j<11; j++)
            {
                if(ara[i]%primes[j]==0)
                {
                    if(cll[j]==0) cll[j]=++clr;

                    ans[i]=cll[j];
                    break;
                }
            }
//            if(ans[i]==0)
//            {
//                gd=ara[i];
//                if(ans[i]) c=ans[i];
//                else c=++clr;
//                ans[i]=c;
//                for(j=i+1; j<n; j++)
//                {
//                    printf("%d %d..%d\n", ara[i],ara[j],__gcd(gd,ara[j]));
//                    if(__gcd(gd,ara[j])>1)
//                    {
//                        gd=__gcd(gd,ara[j]);
//                        if(ans[j]==0) ans[j]=c;
//                    }
//
//                }
//
//            }
        }
        pfi(clr),pn;
        for(i=0; i<n; i++) pfi(ans[i]),ps;
        pn;
    }




    return 0;
}























