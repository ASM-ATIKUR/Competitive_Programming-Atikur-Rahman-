/***
 **   A S M Atikur Rahman
 **   Update: 26-03-2020
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



int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    //IOS
    ll t, n, k, i, j,ans, d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        ans=0;
        d=n/k;

//        if(d%2==0)
//        {
//            for(i=0; i<k; i++)
//            {
//                int ch[30] {0}, mx=0,ai;
//                for(j=i; j<n; j+=k)
//                {
//                    ch[s[j]-'a']++;
//                    if(ch[s[j]-'a']>mx) ai=s[j]-'a';
//                    mx=max(ch[s[j]-'a'],mx);
//                }
////                ll a {0}, b {0};
////                for(j=i; j<n; j+=k)
////                {
////                    if(s[i]==s[j]) a++;
////                    if(s[n-1-i]==s[j]) b++;
////                }
//                ans+=d-mx;
//            }
//        }
//        else
        {
            for(i=0, j=k-1; i<=j; i++,j--)
            {
                ll a {0},b {0}, ai, bi;
                int aa[30] {0}, bb[30] {0};
                for(ll x=i, y=j; x<n; x+=k, y+=k)
                {
                    aa[s[x]-'a']++;
//                    if(aa[s[x]-'a']>a) ai=s[x]-'a';

                    if(i!=j)aa[s[y]-'a']++;
//                    if(bb[s[y]-'a']>b) bi=s[y]-'a';
//                    b=max(b, (ll)bb[s[x]-'a']);
                    a=max(a, (ll)aa[s[x]-'a']);
                    if(i!=j)a=max(a, (ll)aa[s[y]-'a']);
                }
                if(i!=j) ans+=2*d-a;
                else ans+=d-a;
                //cout<<a<<".."<<endl;
//                if(s[i]-'a'==ai) ans-=aa[ai];
//                if(s[j]-'a'==bi) ans-=bb[bi];
                //cout<<a<<" "<<b<<endl;
            }
        }
        cout<<ans<<"\n";

    }




    return 0;
}























