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

int ara[10000];

int fnd(int x)
{
    if(x==ara[x]) return ara[x];
    return ara[x]=fnd(ara[x]);
}

void mset(int n)
{
    for(int i=1; i<=n; i++)
    {
        ara[i]=i;
    }
}
void un(int x, int y)
{
    x=fnd(x);
    y=fnd(y);
    if(x!=y)
    {
        ara[x]=y;
    }
}

int main(void)
{
    int n, x, y, i, j, xx[102], yy[102], ans=0;
    cin>>n;
    mset(102);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &xx[i], &yy[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(xx[i]==xx[j] || yy[i]==yy[j])
                un(i,j);
        }
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]==i) ans++;
    }
    cout<<ans-1<<endl;

    return 0;
}














