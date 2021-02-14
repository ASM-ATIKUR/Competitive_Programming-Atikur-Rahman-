/***
 **   A S M Atikur Rahman
 **   Update: 18-04-2020
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


#define fastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Filein(N) freopen("N", "r", stdin);
#define Fileout(N) freopen("N", "w", stdout);
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

#define For(i,a,n) for(int i=(a); i<=(n); i++)
#define rFor(i,n,a) for(int i=n; i>=a; i--)
#define trav(a,x) for (auto &a : x)
#define Ms(ara, val) memset(ara, val, sizeof(ara))
#define TestCase int testcase, cs=1; cin>>testcase;while(testcase--)

#define All(V) V.begin(), V.end()
#define rAll(V) V.rbegin(), V.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define Ceil(a,b) ((a/b)+((a%b)!=0))
#define Sq(a) ((a)*(a))

#define P(x) cout<<"Check X: "<<x;
#define P2(x,y) cout<<"Check X,Y: "<<x<<" "<<y;
#define P3(x,y,z) cout<<"Check X,Y,Z: "<<x<<" "<<y<<" "<<z;

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


//int POW(int a, int b) { int x=1;while(b){ if(b&1)x*=a;a*=a;b>>=1; }return x; }
//int mPOW(int a, int b, int M) { int x=1;while(b){ if(b&1) x=(x*a)%M;a=(a*a)%M;b>>=1; }return x; }
//
//ll POW(ll a, ll b) { ll x=1;while(b){ if(b&1)x*=a;a*=a;b>>=1; }return x; }
//ll mPOW(ll a, ll b, ll M) { ll x=1;while(b){ if(b&1) x=(x*a)%M;a=(a*a)%M;b>>=1; }return x; }
//ll Sqrt(ll a) { ll x=(ll)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }


#define INF 1000000000
#define LINF 4000000000000000000
#define pi  (2*acos(0))
#define Mod 1000000007





int main( int argc, char *argv[] )
{
    vector<pii>ans[100000];
    int n,m,k,i,j,kk, mm,mres;
    int chk[333][333] {0};
    sci3(n,m,k);
    mm=m-(m%2);
    mres=m%2;
    i=1,j=1;
    kk = 1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=mm; j+=2)
        {
            if(k==kk) break;
            ans[kk].pb({i,j});
            ans[kk].pb({i,j+1});
            chk[i][j]=1;
            chk[i][j+1]=1;
            kk++;
        }
        if(j<=mm) break;
    }

    if(kk<k)
    {
        for(i=1; i<=n; i+=2)
        {
            ans[kk].pb({i,m});
            ans[kk].pb({i+1,m});
            kk++;
            if(kk==k) break;
        }
        for(i+=2;i<=n;i++)
        {
            ans[kk].pb({i,m});
        }
    }
    else
    {
        for(i=m; i>0; i--)
        {
            if((m-i)%2!=mres)
            {
                for(j=1; j<=n; j++)
                {
                    if(chk[j][i]==0)
                    {
                        ans[kk].pb({j,i});
                    }
                }
            }
            else
            {
                for(j=n; j>0; j--)
                {
                    if(chk[j][i]==0)
                    {
                        ans[kk].pb({j,i});
                    }
                }
            }
        }
    }

    for(i=1; i<=k; i++)
    {
        pfi(ans[i].size()),ps;
        for(j=0; j<ans[i].size();j++)
            pfi2(ans[i][j].ff,ans[i][j].ss),ps;
        pn;

    }




    return 0;
}

























