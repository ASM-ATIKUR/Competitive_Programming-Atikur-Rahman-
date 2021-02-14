#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch='a', str[110];
    gets(str);
    int ans=0;

    for(int i=0; i<strlen(str); i++)
    {
        int x, y;
        x=min(str[i],ch);
        y=max(str[i], ch);
        ans+= min(abs(str[i]-ch), x-'a'+'z'-y+1);
        ch=str[i];


    }
    cout<<ans<<endl;

    return 0;
}
