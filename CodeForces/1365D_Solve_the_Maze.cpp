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
//int Set(int &n, int p){return n= n|(1<<p);}
//ll Set(ll &n, ll p){return n= n|(1ll<<p);}
//int Reset(int &n,int p){return n= n&(~(1<<p));}
//ll Reset(ll &n,ll p){return n= n&(~(1ll<<p));}
//bool Check(int n, int p){return (bool) (n&(1<<p));}
//bool Check(ll n, ll p){return (bool) (n&(1ll<<p));}
//int Toggle(int &n, int p){return n= n^(1<<p);}
//ll Toggle(ll &n, ll p){return n= n^(1ll<<p);}

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

int vis[51][51];

bool dfs(vector<string>&grid,int i, int j,int row, int col)
{

    if(i<0 || i>=row) return false;
    if(j<0 || j>=col) return false;
    if(vis[i][j]) return false;
    vis[i][j]=1;
    //P2(i,j);pn;
    if(grid[i][j]=='#' || grid[i][j]=='B') return false;
    if((grid[i][j]=='G'))
        grid[i][j]='.';
    if(i==row-1 && j==col-1)
    {
        return true;
        //cout<<"found"<<endl;
    }
    int ret= dfs(grid,i+1,j,row,col)+
            dfs(grid,i-1,j,row,col)+
            dfs(grid,i,j+1,row,col)+
            dfs(grid,i,j-1,row,col);
    return ret;
}



int main( int argc, char *argv[] )
{
    fastIO;
    TestCase
    {
        int row,col,fg=1,i,j;
        cin>>row>>col;
        vector<string>grid(row);
        for(int i=0; i<row; i++)
        {
            cin>>grid[i];
        }
        for(int i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(grid[i][j]=='B')
                {
                    if(i<row-1)
                    {
                        if(grid[i+1][j]=='.') grid[i+1][j]='#';
                        else if(grid[i+1][j]=='G') fg=0;
                    }
                    if(i>0)
                    {
                        if(grid[i-1][j]=='.') grid[i-1][j]='#';
                        else if(grid[i-1][j]=='G') fg=0;
                    }
                    if(j<col-1)
                    {
                        if(grid[i][j+1]=='.') grid[i][j+1]='#';
                        else if(grid[i][j+1]=='G') fg=0;
                    }
                    if(j>0)
                    {
                        if(grid[i][j-1]=='.') grid[i][j-1]='#';
                        else if(grid[i][j-1]=='G') fg=0;
                    }
                }
            }
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(grid[i][j]=='G')
                {
                    Ms(vis,0);
                    if(dfs(grid,i,j,row,col)==0)
                        fg=0;
                }
            }
        }
        if(fg) printf("Yes\n");
        else printf("No\n");
    }




    return 0;
}

























