#include <stdio.h>
#include <string.h>

int main()
{
    int ch[26], count = 0, i;
    char name[100];

    scanf(" %s", name);

    for(i=0; i<strlen(name); i++)
    {
        ch[name[i]-'a']=1;
    }

    for(i=0; i<26; i++)
    {
        if(ch[i]== 1)
        {
            count++;
        }
    }

    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
