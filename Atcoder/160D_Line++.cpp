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
    int x,y,n,ans=0, ara[2100] {0},i,j;
    cin>>n>>x>>y;
    //for(int k=1; k<n; k++)
    {
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                int tmp;
                //printf("%d %d..", i, j);
                if(x>=i && y<=j)
                {
                    tmp=(j-i)-(y-x)+1;
                }
                else if(i>=x && j<=y)
                {
                    tmp=min(j-i, i-x+y-j+1);
                }
                else if(j>=x && j<=y)
                {
                    tmp =x-i;
                    tmp+=min(j-x, y-j+1);
                }
                else if(i>=x && i<=y)
                {
                    tmp=j-y;
                    tmp+=min(y-i, i-x+1);
                }
                else tmp=j-i;
                ara[tmp]++;
                //printf("%d..\n", tmp);
            }
        }
    }
    for(i=1; i<n; i++)
    {
        printf("%d\n", ara[i]);
    }






    return 0;
}






















