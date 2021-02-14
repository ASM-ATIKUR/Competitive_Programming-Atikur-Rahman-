#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[151], arr2[151], mx=0, n, i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<n; i++)
    {
        mx= max(mx, (arr1[i]*20)-(arr2[i]*10));
    }
    cout<<mx<<endl;
    return 0;
}
