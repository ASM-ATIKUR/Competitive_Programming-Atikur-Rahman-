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
//ll Sqrt(ll a) { ll x=(ll)sqrt(a); if((x+1)*(x+1)==a) x++; return x; }



int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);
    int q;
    sci(q);
    while(q--)
    {
        int n, i,ara[200100],arr[200100], x=0,fs=-1, clr, ans=0, prsz=0;
        set<int>s;
        map<int,int>mp;
        sci(n);
        For(0,n) sci(ara[i]);
        for(i=0; i<n; i++)
        {
            s.insert(ara[i]);
            if(i>0) if(ara[i]==ara[i-1]) fs=i;
            if(i%2) arr[i]=2;
            else arr[i]=1;
//            if(mp.find(ara[i])!=mp.end())
//                arr[i]=mp[ara[i]];
//            else mp[ara[i]]=s.size(),arr[i]=s.size();
//            if(s.size()>prsz)
//            {
//                x++;
//                ans=max(ans,x);
//                ara[i]=ans;
//            }
//            else x=1,ara[i]=ans-1, s.clear(), s.insert(ara[i]);
//            ans=max(x,ans);
//
//            prsz=s.size();
        }
        if(s.size()==1)
        {
            pfi(1),pn;
            for(i=0; i<n; i++) pfi(1),ps;
        }
        else
        {
            if(ara[0]!=ara[n-1] && n%2)
            {
                if(fs==-1)
                {
                    arr[n-1]=3;
                    pfi(3);pn;
                }
                else
                {
                    for(fs; fs<n; fs++)
                    {
                        if(arr[fs]==1) arr[fs]=2;
                        else arr[fs]=1;
                    }
                    pfi(2),pn;
                }
            }
            else pfi(2),pn;
            for(i=0 ;i<n; i++)
                pfi(arr[i]),ps;
        }
        pn;
    }




    return 0;
}






















