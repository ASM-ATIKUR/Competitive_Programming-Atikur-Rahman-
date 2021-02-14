#include <stdio.h>
#include <string.h>

int main()
{
    char a[250], ans[210];
    int i, j, l=0;
    scanf(" %s", a);
    for(i=0, j=0; i<strlen(a); i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            if(l==1){
                ans[j]=' ';
                j++;
            }
            i+=2;
        }
        else
        {
            l=1;
            ans[j]=a[i];
            j++;
        }
    }
    ans[j]='\0';
    printf("%s\n", ans);

    return 0;
}
