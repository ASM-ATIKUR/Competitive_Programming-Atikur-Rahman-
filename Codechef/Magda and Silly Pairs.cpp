#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, A[100009], B[100009], k, l, x, y;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        long long ans=0;
        for(int i=0; i<n; i++)
            scanf("%lld", &A[i]);
        for(int i=0; i<n; i++)
            scanf("%lld", &B[i]);

        sort(A, A+n);
        sort(B, B+n);
        k=l=x=y=0;
        for(int i=0; i<n; i++)
        {
            ans+=(A[i]+B[n-1-i]);
            if(A[i]%2) l++;
            else k++;
            if(B[i]%2) y++;
            else x++;
        }
        int mns= (abs(l-y)+abs(k-x))/2;
        if(ans%2) ans++;
        printf("%lld\n", (ans-mns)/2);
    }
    return 0;
}
