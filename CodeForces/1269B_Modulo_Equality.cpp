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

    int ara[20020], arr[20020],tmp[20020], n,m, cnt=1, i,j, cnt1;
    cin>>n>>m;
    for(i=0; i<n; i++) sci(ara[i]);
    for(i=0; i<n; i++) sci(arr[i]);
    sort(ara,ara+n);
    sort(arr,arr+n);
    for(i=1; i<n; i++)
    {
        if(ara[i]==ara[0]) cnt++;
    }
    int ans=m,x;
    for(i=0; i<n; i++)
    {
        cnt1=0;
        for(j=0; j<n; j++)
        {
            if(arr[j]==arr[i]) cnt1++;
        }
        //pfi(cnt1);ps;pfi(cnt);pn;
        if(cnt1==cnt)
        {
            if(ara[0]<=arr[i]) x=min(ans,(arr[i]-ara[0]));
            else x=min(ans,(m-ara[0]+arr[i]));
            //pfi(x);pn;
            int fg=1;
            if(x<ans)
            {
                for(int k=0; k<n; k++)
                {
                    tmp[k]=(ara[k]+x)%m;
                }
                sort(tmp,tmp+n);
                for(int k=0; k<n; k++) if(arr[k]!=tmp[k]) fg=0;
            }
            if(fg) ans=x;
        }
    }
    cout<<ans<<endl;

    return 0;
}

























