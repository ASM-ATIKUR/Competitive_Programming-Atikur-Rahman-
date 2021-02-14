/***
 **   A S M Atikur Rahman
 **   Update: 17-12-2019
***/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007ll

ll f(ll a,ll pow)
{
    ll ans=0,i,j,sum=0;
    for(i=1,j=1;i<=pow;++i)
    {
        ans=(ans+(j*i)%mod)%mod;
        sum+=j;
        j*=2;
    }
    ll rem=a-sum;
    //printf("rem:%lld\n",rem);
    //printf("i:%lld\n",i);
    ans=(ans+(rem*i)%mod)%mod;
    return ans;
}
int main( int argc, char *argv[] )
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stout);


    int q;
    scanf("%d",&q);
    while(q--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ll ans;
        ans=(f(r,log2(r))-f(l-1,log2(l-1))+mod)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}


























