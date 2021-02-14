#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1011], t[1011], ans[1011];
    int c, i, l, sl, ck;
    cin>>c;
    while(c--)
    {
        scanf("%s", s);
        scanf("%s", t);

        l=strlen(t);
        sl=strlen(s);
        int p=0;

        for(i=0; i<l; i++)
        {
            ans[i]= s[(p+t[i]-'0')%sl];
            p+=t[i]-'0';
        }
        ans[l]='\0';
        printf("%s\n", ans);

    }

    return 0;
}
