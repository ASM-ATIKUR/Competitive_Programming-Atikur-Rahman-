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
    int n, a, b, c, i, t, as,br,cp;
    string s,ss;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a>>b>>c;
        cin>>s;
        as=br=cp=0;
        int l=s.length();
        for(i=0; i<n; i++)
            if(s[i]=='S')as++;
            else if(s[i]=='R') br++;
            else cp++;
        int nn;
        if(n%2) nn=(n/2)+1;
        else nn=n/2;
        if(a>as) as=a-as; else as=0;
        if(b>br) br=b-br; else br=0;
        if(c>cp) cp=c-cp; else cp=0;
        //if(min(as,a)+min(br,b)+min(cp,c)>=nn)
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='S' && a)
                {
                    ss+='R';
                    a--;
                }
                else if(s[i]=='R' && b)
                {
                    ss+='P';
                    b--;
                }
                else if(s[i]=='P' && c)
                {
                    ss+='S';
                    c--;
                }
                else if(as) {ss+='R';as--;}
                else if(br) {ss+='P';br--;}
                else if(cp) {ss+='S';cp--;}
            }
        }
        //pfi(n-a+b+c);ps;pfi(b);ps;pfi(c);ps;pn;
        if(n-a-b-c>=nn)
        {
            printf("YES\n");
            cout<<ss<<endl;
        }
        else
        {
            printf("NO\n");
        }
        ss.clear();
        s.clear();
    }

    return 0;
}














