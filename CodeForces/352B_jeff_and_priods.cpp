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
    vector<pii> chk(100009);
    For(i,0,100005)
    {
        chk[i]={-1,0};
    }

    int n, i,x, cn;
    cin>>n;
    cn=n;
    For(i,0,n)
    {
        scanf("%d", &x);
        if(chk[x].f==-1)
        {
            chk[x]={i,0};
        }
        else if(chk[x].s==0 && chk[x].f!=-1)
        {
            chk[x].s=i-chk[x].f;
            chk[x].f=i;
            cn--;
        }
        else if(chk[x].s!=-1)
        {
            if(i-chk[x].f!=chk[x].s)
            {
                chk[x].s=-1;
                cn--;
                //if(x==1) printf("%d %d...\n", i, chk[1].f);
            }
            chk[x].f=i;
            cn--;
        }
        else cn--;

    }
    cout<<cn<<endl;
    For(i,1,100001)
    {
        if(chk[i].s!=-1 && chk[i].f!=-1)
        {
            printf("%d %d\n", i, chk[i].s);
        }
    }


    return 0;
}















