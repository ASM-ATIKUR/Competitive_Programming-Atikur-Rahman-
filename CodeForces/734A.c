#include <stdio.h>
#include <string.h>

int main()
{
    int n, count=0, i;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='A') count++;
    }
    if(count>(strlen(str)-count)) printf("Anton\n");
    else if(count==(strlen(str)-count)) printf("Friendship\n");
    else printf("Danik\n");
    return 0;

}
