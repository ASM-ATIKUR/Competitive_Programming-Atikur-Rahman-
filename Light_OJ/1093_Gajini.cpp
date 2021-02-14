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
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

#define pi  (2*acos(0))
#define INF 1000000000


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

#define MX 100007
int ara[MX];
pii tree[MX*4];

void init(int node, int st, int en)
{
    if(st==en)
    {
        tree[node].f=ara[st];
        tree[node].s=ara[st];
        return;
    }
    int Left, Right, mid;
    Left=node*2;
    Right=node*2+1;
    mid=(st+en)/2;
    init(Left, st, mid);
    init(Right, mid+1, en);
    tree[node].f=min(tree[Left].f,tree[Right].f);
    tree[node].s=max(tree[Left].s,tree[Right].s);
}

pii query(int node, int st, int en, int range_l, int range_r)
{
    if(range_r<st || range_l>en)
        return {INT_MAX, INT_MIN};
    if(st>=range_l && en<=range_r)
        return tree[node];
    int Left, Right, mid;
    pii query_l, query_r;
    Left=node*2;
    Right=node*2+1;
    mid=(st+en)/2;
    query_l=query(Left, st, mid, range_l, range_r);
    query_r=query(Right, mid+1, en, range_l, range_r);
    return {min(query_l.f,query_r.f), max(query_l.s,query_r.s)};
}


int main( int argc, char *argv[] )
{
    int t,cs=1, n, d, i, ans=INT_MIN;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        ans=INT_MIN;
        for(i=1; i<=n; i++)
        {
            sci(ara[i]);
        }
        init(1,1,n);
        printf("Case %d: ", cs++);
        for(i=1; i<=n-d+1; i++)
        {
            pii q;
            q=query(1, 1, n, i, i+d-1);

            ans=max(ans, q.s-q.f);
        }
        pfi(ans);pn;
    }

    return 0;
}














