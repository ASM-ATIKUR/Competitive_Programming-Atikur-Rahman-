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

/*------------------------Bitmask--------------------------*/

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

bool mark[1001000];
vector<int> primes;
void seive(int n)
{
    ll i,j;
    mark[0]=mark[1]=true;
    for(i=2; i<=n; i++)
    {
        if(mark[i]==false)
        {
            for(j=i*i; j<=n; j+=i)
                mark[j]=true;
            primes.pb(i);
        }
    }
}

int ara[520][510], arr[510][510];
int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    int n,m,i,j,k, ans, cnt;
    seive(1000000);
    sci2(n,m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            sci(ara[i][j]);
            if(mark[ara[i][j]]==0)
            {
                arr[i][j]=0;
            }
            else if(ara[i][j]<2) arr[i][j]=2-ara[i][j];
            else
            {
                int l=(int)(upper_bound(primes.begin(),primes.end(), ara[i][j])-primes.begin());
                arr[i][j]= primes[l]-ara[i][j];
            }
            //printf("%d ", arr[i][j]);
        }
        //pn;
    }
    int a[510] {0},b[510] {0};
    for(i=0; i<n; i++)
    {
        for(j=0; j<m;j++)
        {
            a[i]+=arr[i][j];
        }
        //printf("%d ", a[i]);
    }
    //pn;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n;j++)
        {
            b[i]+=arr[j][i];
        }
        //printf("%d ", b[i]);
    }
    //pn;
    ans=INT_MAX;
    for(i=0; i<n; i++)
    {
        ans=min(a[i],ans);
    }
    for(i=0; i<m; i++) ans=min(ans,b[i]);
    pfi(ans),pn;

    return 0;
}























