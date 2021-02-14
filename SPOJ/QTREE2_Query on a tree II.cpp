/***
 **   A S M Atikur Rahman
 **   Updated: 08-06-2020
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<cctype>
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

#define Ceil(a,b) (((a)/(b))+(((a)%(b))!=0))
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
//template <typename T> inline T Set(T &n, T p){T on=1;return n= n|(on<<p);}
//template <typename T> inline T Reset(T &n, T p){T on=1;return n= n&(~(on<<p));}
//template <typename T> inline bool Check(T n, T p){T on=1;return (bool) (n&(on<<p));}
//template <typename T> inline T Toggle(T &n, T p){T on=1;return n= n^(on<<p);}

/*----------------------------------------------------------*/

/*------------------------Graph_Moves-------------------------*/

//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};

/*------------------------------------------------------------*/

/*------------------------Declarations------------------------*/

//priority_queue<int,vector<int>, greater<int>>  //priority queue sorted in increasing order

/*------------------------------------------------------------*/

template <typename T> T POW(T a, T b){ T x=1;while(b){ if(b&1)x*=a;a*=a;b>>=1; }return x; }
template <typename T> T mPOW(T a, T b, T M){ T x=1;while(b){ if(b&1) x=(x*a)%M;a=(a*a)%M;b>>=1; }return x; }
template <typename T> T Sqrt(T a) { T x=(T)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }


#define INF 1000000000
#define LINF 4000000000000000000
#define PI  (2*acos(0))
#define Mod 1000000007
#define MX 10004

vector<int>graph[MX],lvl(MX),dis(MX),cost[MX],T(MX);
int P[MX][20];

int n,p,q,k,lg=16;

void dfs(int u, int par, int lv, int d)
{
    T[u]=par;
    lvl[u]=lv;
    dis[u]=d;
    for(int i=0; i<graph[u].size();i++)
    {
        int v=graph[u][i];
        if(v==par) continue;
        dfs(v,u,lv+1,d+cost[u][i]);
    }
}

void init_sprstb(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=0; j<=18; j++)
        {
            P[i][j]=-1;
        }
    }
    For(i,1,n)
        P[i][0]=T[i];

    for(j=1; 1<<j <n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(P[i][j-1]!=-1)P[i][j]=P[P[i][j-1]][j-1];
        }
    }
}

int lca_query(int p,int q)
{
    int i;
    if(lvl[p]<lvl[q])
        swap(p,q);
    for(i=lg;i>=0;i--)
    {
        if(lvl[p]-(1<<i)>=lvl[q])
            p=P[p][i];
    }
    if(p==q) return p;

    for(i=lg; i>=0; i--)
    {
        if(P[p][i]!=-1 && P[p][i]!=P[q][i])
            p=P[p][i],q=P[q][i];
    }
    return T[p];
}

int main( int argc, char *argv[] )
{
    fastIO;
    TestCase
    {
        cin>>n;
        For(i,2,n)
        {
            int u,v,c;
            cin>>u>>v>>c;
            graph[u].pb(v);
            graph[v].pb(u);
            cost[u].pb(c);
            cost[v].pb(c);
        }
        dfs(1,-1,0,0);
        init_sprstb(n);
        while(true)
        {
            string s;
            cin>>s;
            if(s=="DONE") break;
            cin>>p>>q;
            int lca=lca_query(p,q);

            if(s=="DIST")
            {
                pfi(dis[p]+dis[q]-2*dis[lca]);pn;
            }
            else
            {
                int i;
                cin>>k;
                if(lvl[p]-lvl[lca]+1>=k)
                {
                    k=lvl[p]-k+1;
                    for(i=lg; i>=0; i--)
                    {
                        if(lvl[p]-(1<<i)>=k)
                            p=P[p][i];
                    }
                    pfi(p),pn;
                }
                else
                {
                    k=-lvl[p]+2*lvl[lca]+k-1;
                    for(i=lg;i>=0;i--)
                    {
                        if(lvl[q]-(1<<i)>=k)
                            q=P[q][i];
                    }
                    pfi(q),pn;
                }
            }
        }
        pn;
        For(i,1,n)
        {
            graph[i].clear();
            cost[i].clear();
        }
    }











    return 0;
}

















