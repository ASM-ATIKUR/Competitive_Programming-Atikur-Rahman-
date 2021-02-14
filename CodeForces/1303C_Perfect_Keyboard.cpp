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

#define For(i,a,n) for(int i=(a); i<(n); i++)
#define rFor(i,n,a) for(int i=n-1; i>=0; i--)
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

    int t, l;
    char s[220];
    sci(t);
    while(t--)
    {
        scanf("%s", s);
        char k[1000];
        l=strlen(s);
        k[500]=s[0];
        int a,b,i,j, pos, fg=1;
        a=b=pos=500;
        for(i=1; i<l; i++)
        {
            if(pos!=a && pos!=b)
            {
                if(s[i]==k[pos-1])pos--;
                else if(s[i]==k[pos+1]) pos++;
                else fg=0;
            }
            else if(pos==b)
            {
                if(s[i]==k[pos-1]) pos--;
                else k[++pos]=s[i],b++;
            }
            else if(pos==a)
            {
                if(s[i]==k[pos+1]) pos++;
                else k[--pos]=s[i],a--;
            }
            //pfi(a),ps,pfi(b),ps, pfi(pos),pn;
        }
        //pfi(fg);pn;
        int chk[26]={0};
        for(i=a; i<=b; i++)
        {
            chk[k[i]-'a']=1;
            //printf("%c", k[i]);
            for(j=i+1; j<=b; j++)
                if(k[i]==k[j]) fg=0;
        }
        //pfdot,pn;
        if(fg)
        {
            printf("YES\n");
            for(i=a; i<=b; i++)
                printf("%c", k[i]);
            for(i=0; i<26; i++)
                if(chk[i]==0) printf("%c", 'a'+i);
            pn;
        }
        else printf("NO\n");

    }





    return 0;
}






















