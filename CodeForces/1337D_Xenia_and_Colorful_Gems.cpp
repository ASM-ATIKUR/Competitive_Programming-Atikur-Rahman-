/***
 **   A S M Atikur Rahman
 **   Update: 01-04-2020
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<time.h>
#include<climits>
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
#define sci2(x,y) scanf("%d%*c%d%*c", &(x), &(y))
#define sci3(x,y,z) scanf("%d%*c%d%*c%d%*c", &(x), &(y), &(z))
#define scll(x) scanf("%lld%*c", &(x))
#define scll2(x,y) scanf("%lld%*c%lld%*c", &(x), &(y))
#define scll3(x,y,z) scanf("%lld%*c%lld%*c%lld%*c", &(x), &(y), &(z))
#define scd(x) scanf("%lf%*c", &(x))
#define scd2(x,y) scanf("%lf%*c%lf%*c", &(x), &(y))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfi2(x,y) printf("%d %d", (x), (y))
#define pfll(x) printf("%lld", (x))
#define pfll2(x,y) printf("%lld %lld", (x), (y))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define ps printf(" ")
#define pn printf("\n")
#define pfdot printf("..")

#define For(a,n) for(int i=(a); i<(n); i++)
#define rFor(n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto &a : x)
#define Mset(ara, val) memset(ara, val, sizeof(ara))
#define TestCase int testcase, cs=1; sci(testcase);while(testcase--)

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define pi  (2*acos(0))
#define Mod 1000000007


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

/*------------------------Bitmask--------------------------*/
//INTEGER

#define Toggle(n,i) (n^(1<<i))
#define Check(n,i) (n&(1<<i))
#define Set(n,i) (n|(1<<i))
#define Reset(n,i) (n&(~(1<<i)))

////LONG LONG INTEGER
//#define Toggle(n,i) (n^((1ll)<<i))
//#define Check(n,i) (n&((1ll)<<i))
//#define Set(n,i) (n|((1ll)<<i))
//#define Reset(n,i) (n&(~((1ll)<<i)))

//// Functions for Bitmask
//int Set(int n, int p){return n= n|(1<<p);}
//ll Set(ll n, ll p){return n= n|(1ll<<p);}
//int Reset(int n,int p){return n= n&(~(1<<p));}
//ll Reset(ll n,ll p){return n= n&(~(1ll<<p));}
//bool Check(int n, int p){return (bool) (n&(1<<p));}
//bool Check(ll n, ll p){return (bool) (n&(1ll<<p));}
//int Toggle(int n, int p){return n= n^(1<<p);}
//ll Toggle(ll n, ll p){return n= n^(1ll<<p);}

/*----------------------------------------------------------*/



/*------------------------Declarations------------------------*/

//priority_queue<int,vector<int>, greater<int>>  //priority queue sorted in increasing order

/*------------------------------------------------------------*/


ll cal(ll a, ll b, ll c)
{
    //printf("%lld %lld %lld.....\n", a,b,c);
    return ((a-b)*(a-b))+((b-c)*(b-c))+((a-c)*(a-c));
}

ll chk(vector<ll> &l, vector<ll> &m, vector<ll> &r)
{
    ll ret=LLONG_MAX,i,j,k;

//    for(i=0; i<m.size(); i++)
//    {
//        j=(ll)(lower_bound(l.begin(),l.end(), m[i]+1)-l.begin());
//        k=(ll)(lower_bound(r.begin(),r.end(), m[i])-r.begin());
//        k--;
//        if(j<l.size() && k>0)
//        {
//            ret=min(ret, cal(l[j],m[i],r[k]));
//        }
//        j=(ll)(lower_bound(r.begin(),r.end(), m[i]+1)-r.begin());
//        k=(ll)(lower_bound(l.begin(),l.end(), m[i])-l.begin());
//        k--;
//        if(j<r.size() && k>0)
//        {
//            ret=min(ret, cal(r[j],m[i],l[k]));
//        }
//    }
//    //if(ret==LLONG_MAX)
    {
        for(i=0; i<m.size(); i++)
        {
            j=(ll)(lower_bound(l.begin(),l.end(), m[i])-l.begin());
            k=(ll)(lower_bound(r.begin(),r.end(), m[i])-r.begin());
            if(k<r.size())
            {
                if(j<l.size())
                {
                    if(l[j]==m[i])
                    {
                        ret=min(ret, cal(l[j],m[i], r[k]));
                    }
                    else if(j>0)
                    {
                        ret=min(ret,cal(l[j-1],m[i], r[k]));
                    }
                }
                else ret=min(ret,cal(l[j-1],m[i], r[k]));
            }
            if(j<l.size())
            {
                if(k<r.size())
                {
                    if(r[k]==m[i])
                    {
                        ret=min(ret, cal(l[j],m[i], r[k]));
                    }
                    else if(k>0)
                    {
                        ret=min(ret,cal(l[j],m[i], r[k-1]));
                    }
                }
                else ret=min(ret,cal(l[j],m[i], r[k-1]));
            }

        }
    }
    return ret;
}





int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    TestCase
    {
        ll r,g,b,i,j,ans=LLONG_MAX;
        vector<ll> rr,gg,bb;
        scll3(r,g,b);
        For(0,r)
        {
            ll x;
            scll(x);
            rr.pb(x);
        }
        For(0,g)
        {
            ll x;
            scll(x);
            gg.pb(x);
        }
        For(0,b)
        {
            ll x;
            scll(x);
            bb.pb(x);
        }
        sort(rr.begin(),rr.end());
        sort(gg.begin(),gg.end());
        sort(bb.begin(),bb.end());
        ans=min(ans, chk(rr, gg, bb));
        ans=min(ans, chk(gg, rr, bb));
        ans=min(ans, chk(rr, bb, gg));

        pfll(ans),pn;
    }


    return 0;
}























