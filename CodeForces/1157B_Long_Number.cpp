#include <bits/stdc++.h>
using namespace std;

int main()
{
    char num[200005];
    int n, i, j, a, cnt=0;
    int mp[10];
    cin>>n;
    scanf("%s", num);
    for(i=1; i<=9; i++)
    {
        scanf("%d", &mp[i]);
    }
    for(i=0; i<n; i++)
    {
        //printf("%d %d\n", num[i], mp[num[i]-'0']+'0');
        if(num[i]<mp[num[i]-'0']+'0')
        {
            num[i]=mp[num[i]-'0']+'0';
            cnt++;

        }
        else if(cnt && num[i]>mp[num[i]-'0']+'0')
            break;
    }
    printf("%s\n", num);
    return 0;
}
