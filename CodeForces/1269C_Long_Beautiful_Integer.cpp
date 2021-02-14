/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
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
#define Mset0(ara, val) memset(ara, val, sizeof(ara))

#define mkp make_pair
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




int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);

    int n, k;
    string str,ss;
    cin>>n>>k;
    cin>>str;
    ss=str.substr(0,k);
    //cout<<ss<<endl;
    int fg=1,i,j;
    for(i=0; i<n; i+=k)
    {
        for(j=0; j<k && j+i<n; j++)
        {
            if(str[j+i]>ss[j])
                fg=0;
            else if(str[j+i]<ss[j])
                goto jump;
        }
    }
    jump:
        int cr=1;
    if(fg==0)
    {
        for(i=k-1; i>=0 && cr; i--)
        {
            if(ss[i]=='9')
            {
                ss[i]='0';
            }
            else
            {
                ss[i]++;
                cr=0;
            }
        }
    }
    else cr=0;
    string ans;
    if(cr)
    {
        ss=str.substr(0,k);
        n++;
    }
    while(ans.length()+k<= n)
    {
        ans+=ss;
    }
    for(i=ans.length(), j=0; i<n; i++,j++)
    {
        ans+=ss[j];
    }
    cout<<n<<endl;
    cout<<ans<<endl;


    return 0;
}


