/***
 **   A S M Atikur Rahman
 **   Update: 14-11-2019
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<map>
#include<math.h>
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
#define f first
#define s second
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

int color[210];


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    int n, e, i, u, v, l;
    while(true)
    {
        sci(n);
        if(n==0) break;
        sci(l);
        vector<int> graph[n];
        for(i=0; i<l; i++)
        {
            sci(u);sci(v);
            graph[u].pb(v);
            graph[v].pb(u);
        }
        int fg=0;
        queue<int> qu;
        memset(color, 0, sizeof(color));
        color[0]=1;
        qu.push(0);
        while(!qu.empty())
        {
            int top=qu.front();
            qu.pop();
            for(i=0;i<graph[top].size(); i++)
            {
                int v=graph[top][i];
                if(color[v]==0)
                {
                    if(color[top]==1)
                        color[v]=2;
                    else color[v]=1;
                    qu.push(v);
                }
                //printf("%d %d %d %d..\n", top, v, color[top], color[v]);
                if(color[top]==color[v])
                {
                    fg=1;
                }
            }
        }
        if(fg) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABEL.\n");

    }


    return 0;
}












