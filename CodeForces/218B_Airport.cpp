/***
 **   A S M Atikur Rahman
 **   Update: 27-10-2019
***/

#include <bits/stdc++.h>


#define sci(x) scanf("%d", &(x))
#define scll(x) scanf("%lld", &(x))
#define scd(x) scanf("%lf", &(x))
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


int main(void)
{
    int n, m, ara[10000], x, mn, mx;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+m);
    x=n;mn=0;
    For(i, 0, m)
    {
        if(ara[i]>x)
        {
            mn+=((ara[i]*(ara[i]+1))/2)-(((ara[i]-x)*(ara[i]-x+1))/2);
            break;
        }
        else
        {
            mn+=(ara[i]*(ara[i]+1))/2;
            x-=ara[i];
        }
    }
    x=n;mx=0;
    int cnt=0;

    while(ara[m-1])
    {
        mx+=ara[m-1];
        ara[m-1]--;
        cnt++;
        if(cnt==n) break;
        sort(ara, ara+m);
    }
    printf("%d %d\n", mx, mn);

    return 0;
}















