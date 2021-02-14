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



int main()
{
	int n, m, d, ara[10000], sum=0, ans[10000], i, j,cnt;
	cin>>n>>m>>d;
	for(i=0; i<m; i++)
	{
		scanf("%d", &ara[i]);
		sum+=ara[i];
	}
	int x=0;
	for(i=0; i<n;)
	{
		if(sum==n-i)
		{
			for(;x<m; x++)
			{
				for(j=0; j<ara[x];j++, i++)
				{
					ans[i]=x+1;
				}
			}
		}
		else if(sum)
		{
			cnt=0;
			while(sum<n-i && cnt+1<d)
			{
				ans[i++]=0;
				cnt++;
			}
			if(sum==n-i) continue;
			else
			{
				for(j=0; j<ara[x] && x<m; j++,i++)
				{
					ans[i]=x+1;
					//pfi(i);pfdot;pn;
					sum--;
				}
				if(x<m)x++;
				//pfi(i);pn;
			}
		}
		else if(n+1-i>d) break;
		else ans[i++]=0;
		//printf("%d..\n", i);
	}
	//printf("%d...\n", i);
	if(i>=n)
	{
		printf("YES\n");
		for(i=0; i<n; i++)
			printf("%d ", ans[i]);
			printf("\n");
	}
	else printf("NO\n");



	return 0;
}
