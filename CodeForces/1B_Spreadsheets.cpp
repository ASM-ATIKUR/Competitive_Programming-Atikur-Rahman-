/***
 **   A S M Atikur Rahman
 **   Update: 14-11-2019
***/

//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#include<map>
#include<math.h>
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

//ll POW(ll a,ll b){if(b==0)return 1;ll x=POW(a,b/2);x=(x*x);if(b&1)x=(x*a);return x;}




int main( int argc, char *argv[] )
{
    char str[20];
    string a,b;
    int r,c,n, i, j, l, mul;
    cin>>n;
    while(n--)
    {
        scanf("%s", str);
        l=strlen(str);
        a.clear();b.clear();
        r=c=0;
        int cnt=0;
        for(i=0; i<l; i++)
        {
            if(str[i]=='R' || str[i]=='C') cnt++;
        }
        int ent=0;
        if(cnt==2)
        {
            if((str[0]>='A'&&str[0]<='Z')&&(str[1]>='A'&&str[1]<='Z')) ent=1;
        }
        else ent=1;
        if(ent)
        {
            for(i=0; i<l; i++)
            {
                if(str[i]>='0'&&str[i]<='9')
                    break;
                a+=str[i];
            }
            mul=1;
            for(j=l-1; j>=i; j--)
            {
                r+=(str[j]-'0')*mul;
                mul*=10;
            }
            l=a.size();
            mul=1;
            for(i=l-1; i>=0; i--)
            {
                c+=(str[i]-'A'+1)*mul;
                mul*=26;
            }
            printf("R%dC%d\n", r,c);
        }
        else
        {
            mul=1;
            for(i=l-1; i>=0; i--)
            {
                if(str[i]=='C')
                    break;
                c+=(str[i]-'0')*mul;
                mul*=10;
            }
            mul=1;
            for(i--;i>0; i--)
            {
                r+=(str[i]-'0')*mul;
                mul*=10;
            }
            while(c)
            {
                int fg=0;
                if(c%26==0)
                {
                    a+='Z';
                    fg=1;
                }
                else a+=('A'+(c%26)-1);
                c/=26;
                if(fg) c--;
            }
            reverse(a.begin(),a.end());
            cout<<a<<r<<endl;
        }
    }

    return 0;
}














