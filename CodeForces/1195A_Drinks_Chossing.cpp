#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k,x=0;
    cin>>n>>k;
    int arr[k+2], z=n;
    while(z--)
    {
        cin>>arr[x++];
    }
    for(int i=1; i<=k; i++)
    {
        if(arr[i]%2) n--;
    }
    cout<<n<<endl;

    return 0;
}
