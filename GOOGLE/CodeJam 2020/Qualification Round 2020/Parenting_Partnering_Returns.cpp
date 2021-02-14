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
int n, on[1500], tw[1500], fg;
vector<pii> v;
string ans;

void sol(int i, string ss)
{
//    printf("%d..", i);
//    cout<<ss<<endl;
    if(i==n)
    {
        if(ans.size()<ss.size()) ans=ss;
        return ;
    }
    int j,f=1,ff=1;
    //for(; i<n; i++)
    {
        int x,y;
        x=v[i].ff;
        y=v[i].ss;
//        for(j=x; j<=y; j++) printf("%d", on[j]);ps;
//        for(j=x; j<=y; j++) printf("%d", tw[j]);pn;
        for(j=x+1; j<y; j++)
        {
            if(on[j]) f=0;
            if(tw[j]) ff=0;
        }
//        printf("%d %d\n", x,y);
//        printf("%d %d\n", f,ff);
//        if(f && ff)
//        {
//
//            string a,b;
//            for(j=x; j<=y; j++) on[j]=1;
//            ss.pb('C');
//            sol(i+1, ss);
//            for(j=x; j<=y; j++) on[j]=0;
//            ss.pop_back();
//            ss.pb('J');
//            for(j=x; j<=y; j++) tw[j]=1;
//            sol(i+1, ss);
//            ss.pop_back();
//            for(j=x; j<=y; j++) tw[j]=0;
//            //if(a.length()>=b.length()) return a;
//            //else return b;
//            return ;
//        }
        if(f)
        {
            ss.pb('C');
            string c;
            for(j=x; j<=y; j++) on[j]=1;
            sol(i+1, ss);
            for(j=x; j<=y; j++) on[j]=0;
            ss.pop_back();
            //return c;
            return;
        }
        if(ff)
        {
            string d;
            ss.pb('J');
            for(j=x; j<=y; j++) tw[j]=1;
            sol(i+1, ss);
            for(j=x; j<=y; j++) tw[j]=0;
            ss.pop_back();
            //return d;
            return;
        }

    }
}

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    int t,cs=1, i, j;
    sci(t);
    while(t--)
    {
        int x,y;
        sci(n);
        v.clear();
        ans.clear();
        fg=1;
        Mset(on, 0);
        Mset(tw, 0);
        For(0,n)
        {
            sci2(x,y);
            v.pb({x,y});
        }
        string sss;
        sol(0,sss);
        printf("Case #%d: ",cs++);
        if(ans.length()==n) cout<<ans<<endl;
        else cout<<"IMPOSSIBLE\n";
//        sci(n);
//        int on[1500] {0},tw[1500] {0},fg=1,k,x,y;
//        string ans;
//        while(n--)
//        {
//            sci2(x,y);
//
//            int f=1,ff=1;
//            for(i=x+1; i<y; i++)
//            {
//                if(on[i])f=0;
//                if(tw[i]) ff=0;
//            }
//            if(f)
//            {
//                for(i=x;i<=y; i++)
//                {
//                    on[i]=1;
//                }
//                ans.pb('C');
//            }
//            else if(ff)
//            {
//                for(i=x; i<=y; i++) tw[i]=1;
//                ans.pb('J');
//            }
//            else fg=0;
//        }
//        printf("Case #%d: ", cs++);
//        if(fg)
//            cout<<ans<<endl;
//        else printf("IMPOSSIBLE\n");
    }


    return 0;
}























