#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char inpt[105], check[30]={0};
    scanf(" %d", &n);
    scanf(" %s", inpt);
    inpt[n]='\0';

    for(i=0; i<n; i++)
    {

        if(inpt[i]>='a' && inpt[i]<='z')
        {
            if(check[(inpt[i]-'a')]==0)
            {
                check[inpt[i]-'a']=1;
            }
        }
        else if(inpt[i]>='A' && inpt[i]<='Z')
        {
            if(check[(inpt[i]-'A')]==0)
            {
                check[inpt[i]-'A']=1;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        if(!check[i]) break;
    }
    if(i==26) printf("YES\n");
    else printf("NO\n");

    return 0;
}
