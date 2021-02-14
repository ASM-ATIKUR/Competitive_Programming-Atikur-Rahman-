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


bool cmp(pii a, pii b)
{
    if(a.ss*b.ff<b.ss*a.ff) return true;
    return false;
}

int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll t, a, b, p, i, j,l;
    char str[200100];
    sci(t);
    while(t--)
    {
        scanf("%lld %lld %lld", &a, &b, &p);
        scanf("%s", str);
        //vector<pii,int,int> v;
        l=strlen(str);
        ll pre=0,tot=0;
        for(i=1; i<l; i++)
        {
            if(str[i]!=str[pre])
            {
                if(str[pre]=='A')
                {
                    //v.pb({{a,i-pre},pre,i});
                    tot+=a;
                }
                else tot+=b;
                pre=i;
            }
        }
        if(pre<l-1)
        {
            if(str[pre]=='A')
            {
                tot+=a;
            }
            else tot+=b;
        }

        pre=0;
        //printf("%d..\n",tot);
        for(i=0; i<l; i++)
        {
            if(tot<=p) break;
            if(str[i]!=str[pre])
            {
                if(str[pre]=='A')
                {
                    //v.pb({{a,i-pre},pre,i});
                    tot-=a;
                }
                else tot-=b;
                //printf("%d...###\n",tot);
                //if(tot<=p) break;
                pre=i;

            }
        }
        if(tot>p) pre=l;
        else pre++;
        pfll(pre),pn;
//        if(tot>p)
//        {
//            if(str[pre]=='A')
//            {
//                tot-=a;
//            }
//            else tot-=b;
//        }


//        for(i=1; i<l; i++)
//        {
//            if(str[i]!=str[pre])
//            {
//                if(str[pre]=='A')
//                {
//                    v.pb({{a,i-pre},pre,i});
//                    tot+=a;
//                }
//                else v.pb({b,i-pre,pre,i}),tot+=b;
//                pre=i;
//            }
//        }
//        if(str[pre]=='A')
//        {
//            v.pb({a,i-pre-1,pre,i-1});
//            tot+=a;
//        }
//        else v.pb({b,i-pre,pre,i-1}),tot+=b;
//        //sort(v.begin(),v.end(),cmp);
//        int dis=0;
//        //pfi(tot),pn;
//        for(i=0; i<v.size();i++)
//        {
//            //printf("%d %d..\n", v[i].ff, v[i].ss);
//            if(tot-p>0)
//            {
//                tot-=v[i].ff;
//            }
//            else break;
//        }
//        pfi(i+1),pn;
    }




    return 0;
}






















