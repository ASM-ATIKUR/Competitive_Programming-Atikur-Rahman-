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


int chk[1000009], ocr[1000009];

int main( int argc, char *argv[] )
{
    int n, ara[100009], fg=1, i;
    set<int> seg, b;
    vector<int>ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        sci(ara[i]);
        if(ara[i]>0 && fg)
        {
            int p=seg.size();
            if(p==0) ans.pb(i);
            seg.insert(ara[i]);
            if(p==seg.size())
            {
                fg=0;
            }
            p=b.size();
            b.insert(ara[i]);
            if(p==b.size())
                fg=0;
        }
        else if(fg)
        {
            ara[i]*=-1;
            int p=seg.size();
            seg.erase(ara[i]);
            if(p-1!=seg.size())
            {
                fg=0;
            }
            if(p-1==0)
            {
                seg.clear();
                b.clear();
                ans.pb(i);
            }
            else
            {
                b.insert(ara[i]);
            }
        }
    }
    int p=seg.size(), q=b.size();
    if(fg && !p && !q)
    {
        printf("%d\n", ans.size()/2);
        n=ans.size();
        for(i=0; i<n; i+=2)
        {
            printf("%d ", ans[i+1]-ans[i]+1);
        }
    }
    else printf("-1\n");

    return 0;
}














