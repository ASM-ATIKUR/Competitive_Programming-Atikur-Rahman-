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
    char str[100009];
    int fg, i, j, l;
    while(scanf("%s", str)!=EOF)
    {
        deque<string> dq;
        deque<string>:: iterator it;
        string s, s1;
        l=strlen(str);
        fg=0;
        for(i=0; i<l; i++)
        {
            if(str[i]!= '[' && str[i]!=']')
            {
                if(fg) s1+=str[i];
                else s+=str[i];
            }
            else
            {
                if(str[i]=='[')
                {

                    if(fg)
                    {
                        if(s1.size())dq.push_back(s1);
                        fg=0;
                        s1.clear();
                    }
                    else
                    {
                        if(s.size()) dq.push_front(s);
                        s.clear();
                    }
                }
                else
                {
                    if(fg==0)
                    {
                        if(s.size())dq.push_front(s);
                        fg=1;
                        s.clear();
                    }
                    else
                    {
                        if(s1.size()) dq.push_back(s1);
                        s1.clear();
                    }
                }
            }
        }
        if(s.size()) dq.push_front(s);
        if(s1.size()) dq.push_back(s1);
        while(!dq.empty())
        {
            cout<<dq.front();
            dq.pop_front();
        }
        pn;

    }


    return 0;
}

















