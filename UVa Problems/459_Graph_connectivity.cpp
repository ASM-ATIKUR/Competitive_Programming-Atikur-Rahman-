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

int parentArray[1000], rankArray[1000];
int ans;

void mSet(int n)
{
    for(int i=0; i<n; ++i)
    {
        parentArray[i]=i;
        rankArray[i]=0;
    }
    ans=n;
}

int findSet(int x)
{
    if(x!=parentArray[x])
        parentArray[x]=findSet(parentArray[x]);
    return parentArray[x];
}

void unionSet(int x, int y)
{
    x=findSet(x);
    y=findSet(y);
    if(x!=y)
    {
        if(rankArray[x]>rankArray[y])
            parentArray[y]=x;
        else
        {
            parentArray[x]=y;

            if(rankArray[x]==rankArray[y])
                rankArray[y]=rankArray[y]+1;
        }
        ans--;
    }
}


int main()
{
    int n;
    scanf("%d\n\n", &n);
    char str[3],s;
    while(n--)
    {
        s=getchar();
        getchar();
        mSet(s-'A'+1);
        while(gets(str) && strlen(str))
        {
            unionSet(str[0]-'A', str[1]-'A');
        }
        printf("%d\n", ans);
        if(n) pn;
    }

    return 0;
}










