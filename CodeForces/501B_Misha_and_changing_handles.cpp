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
using pss= pair<string, string>;

#define V(a) vector<a>
using vi= vector<int>;
using vs= vector<string>;
using vll= vector<ll>;
using vpii= vector<pii>;
using vc= vector<char>;
using vd= vector<double>;


int main( int argc, char *argv[] )
{
    int n, i, j, chk[1009];
    memset(chk, 0,sizeof(chk));
    V(pss) data;
    string s,s1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s>>s1;
        data.push_back({s,s1});
    }
    int ans=n;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            int fg=0;
            if(data[i].s == data[j].f && !chk[j])
            {
                data[i].s=data[j].s;
                chk[j]=1;
                fg=1;
            }
            if(data[i].f == data[j].s && !chk[j])
            {
                data[i].f=data[j].f;
                chk[j]=1;
                fg=1;
            }
            if(fg) ans--;
        }
    }
    pfi(ans);pn;
    for(i=0; i<n; i++)
    {
        if(chk[i]==0) cout<<data[i].f<<" "<<data[i].s<<"\n";
    }


    return 0;
}














