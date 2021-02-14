#include <bits/stdc++.h>
using namespace std;

int ara[100009];
int arr[100009];
int main()
{
    int n, a, ans=0, k;
    scanf("%d %d", &n, &k);
    while(n--)
    {
        scanf("%d", &a);

        if(a>0)
        {
            if(a>k)
            {
                ans+=arr[a-k];
            }
            else
                ans+=ara[k-a];
            ara[a]++;
        }
        else
        {
            if(a<k)
            {
                ans+=ara[k-a];
            }
            else
                ans+=arr[a-k];
            arr[abs(a)]++;
        }
    }
    printf("%d\n", ans);

    return 0;
}
