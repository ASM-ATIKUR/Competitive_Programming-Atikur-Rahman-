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
#define M 1000000007
ll ara[3],n;
ll I[3][3], T[3][3];

void mul(ll A[3][3], ll B[3][3])
{
    ll tmp[3][3],i,j,k;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            tmp[i][j]=0;
            for(k=0; k<2; k++)
            {
                tmp[i][j]+=(A[i][k]*B[k][j])%M;
                tmp[i][j]%=M;
            }
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            A[i][j]=tmp[i][j];
    }
}

void matex(ll A[3][3], ll n)
{
    int i,j;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            if(i==j) I[i][j]=1;
            else I[i][j]=0;
    while(n)
    {
        if(n%2)
            mul(I, A),n--;
        else mul(A,A),n/=2;
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            A[i][j]=I[i][j];
    }
}

ll fib(ll n)
{
    if(n==1) return ara[0];
    else if(n==2) return ara[1];

    T[0][0]=0;
    T[1][0]=1;
    T[0][1]=1;
    T[1][1]=1;

    matex(T, n-1);
    ll ans;
    ans= ((T[0][0]*ara[0])%M+(ara[1]*T[0][1])%M)%M;
    return ans;

}


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    ll t;
    scll(t);
    while(t--)
    {
        scll3(ara[0], ara[1], n);
        n++;
        pfll(fib(n));
        pn;
    }


    return 0;
}























