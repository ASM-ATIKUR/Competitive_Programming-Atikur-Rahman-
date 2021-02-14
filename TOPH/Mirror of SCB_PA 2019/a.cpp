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

ll phi[2000100],mark[2000100];
void seivephi(int n)
{
    int i,j;
    for(i=1;i<=n;i++) phi[i]=i;
    mark[1]=1;

    for(i=2;i<=n;i++)
    {
        if(!mark[i])
        {
            for(j=i;j<=n;j+=i)
            {
                mark[j]=1;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int phii(int n, int k)
{
    int ret=n, ans=k;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            if(ret>=k)
            ans-=k/i;
            else ans-=ret/i;
            ret-=ret/i;
            //printf("%d ", ans);
        }
    }
    //printf("%d..\n",ret);
    if(n>1 && ret<k) ans-=ret/n;
    //pn;
    //printf("%d..\n",ans);
    return ans;
}


int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    ll t,n,m,i,ans,cs=1;
    scll(t);
    seivephi(1000000);
    while(t--)
    {
        scll(n),scll(m);
        ans=phi[n]*(m/n);
        if(m%n)
        {
            m=m%n;
            ans+=phii(n,m);
            //printf("%d..\n", phii(n,m));
        }
        printf("Case %d: ",cs++);
        pfll(ans),pn;
    }





    return 0;
}






















