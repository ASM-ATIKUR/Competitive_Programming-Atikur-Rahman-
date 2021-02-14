#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i=0, ec=0, ck=0, ad=0, t;
    char str[100009];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", str);
        while(str[i]!='\0')
        {
            if(ec<=(n-11)/2 && str[i]=='8')
            {
                ec++;
                ck+=ad;
                ad=0;
            }
            else ad++;

            i++;
        }
        cout<<ec<<ck<<endl;
        if(ec>(n-11)/2 && ck<= (n-11)/2)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
