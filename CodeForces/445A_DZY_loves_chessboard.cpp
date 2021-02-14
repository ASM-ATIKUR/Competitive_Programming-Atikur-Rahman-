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

char ara[101][101];
int a,b;

void clr(char c, int i, int j)
{
    if(ara[i][j]!='.') return;
    ara[i][j]=c;

    if(i-1>=0)
    {
        if(c=='B') clr('W',i-1, j);
        else clr('B',i-1,j);
    }
    if(i+1<a)
    {
        if(c=='B') clr('W',i+1, j);
        else clr('B',i+1,j);
    }
    if(j-1>=0)
    {
        if(c=='B') clr('W',i, j-1);
        else clr('B',i,j-1);
    }
    if(j+1<b)
    {
        if(c=='B') clr('W',i, j+1);
        else clr('B',i,j+1);
    }
}

int main(void)
{
    int i,j;
    cin>>a>>b;
    for(i=0; i<a; i++)
    {
        scanf("%s", ara[i]);
    }

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(ara[i][j]=='.') clr('W', i, j);
        }
    }
    for(i=0; i<a; i++)
    {
        printf("%s\n", ara[i]);
    }


    return 0;
}















