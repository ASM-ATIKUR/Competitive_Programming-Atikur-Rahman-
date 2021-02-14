/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
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
#include<utility>
#include<iterator>
#include<algorithm>
#include<cassert>
#include<iomanip> ///setprecision


#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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

#define For(a,n) for(int i=(a); i<(n); i++)
#define rFor(n,a) for(int i=n-1; i>=0; i--)
#define trav(a,x) for (auto& a : x)
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




int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    int r,b,y,g,i,j;
    string s;
    vector<int>ans;
    cin>>s;
    r=b=y=g=-1;
    for(i=0; i<4; i++)
    {
        int fg,cnt=0;
        for(int k=i;k<s.length(); k+=4)
        {
            if(s[k]=='R') fg=1;
            else if(s[k]=='G') fg=2;
            else if(s[k]=='B') fg=3;
            else if(s[k]=='Y') fg=4;
            else cnt++;
        }
        if(fg==1) r=cnt;
        else if(fg==2) g=cnt;
        else if(fg==3) b=cnt;
        else if(fg==4) y=cnt;
        else ans.pb(cnt);
    }
    i=0;
    if(r>-1) pfi(r),ps;
    else pfi(ans[i++]),ps;
    if(b>-1) pfi(b),ps;
    else pfi(ans[i++]),ps;
    if(y>-1) pfi(y),ps;
    else pfi(ans[i++]),ps;
    if(g>-1) pfi(g),ps;
    else pfi(ans[i++]),pn;





    return 0;
}






















