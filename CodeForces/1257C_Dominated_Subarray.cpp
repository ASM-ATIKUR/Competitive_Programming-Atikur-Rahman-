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


int main( int argc, char *argv[] )
{
//    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, ara[200009],oin[200009], i, mn=INT_MAX;
    cin>>t;
    while(t--)
    {
        scanf("%d", &n);
        int fg=0;
        mn=INT_MAX;
        for(i=1; i<=n; i++)
        {
            scanf("%d", &ara[i]);
            oin[i]=-1;
        }
        for(i=1; i<=n; i++)
        {
            if(oin[ara[i]]==-1)
            {
                oin[ara[i]]=i;
            }
            else
            {
                fg=1;
                int x=i-oin[ara[i]]+1;
                mn=min(x, mn);
                oin[ara[i]]=i;
            }
            //printf("%d %d..\n", mn, oin[ara[i]]);
        }
        if(fg)
            printf("%d\n", mn);
        else printf("-1\n");
    }

    return 0;
}















