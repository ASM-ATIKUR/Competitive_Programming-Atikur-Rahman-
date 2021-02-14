#include <stdio.h>
#include <string.h>

int main()
{
    char stak[6][15], str[6][15], ss[15];

    strcpy(stak[0],"Power");
    strcpy(stak[1],"Time");
    strcpy(stak[2],"Space");
    strcpy(stak[3],"Soul");
    strcpy(stak[4],"Reality");
    strcpy(stak[5],"Mind");

    strcpy(str[0],"purple");
    strcpy(str[1],"green");
    strcpy(str[2],"blue");
    strcpy(str[3],"orange");
    strcpy(str[4],"red");
    strcpy(str[5],"yellow");

    int n, flag[6]={0};
    scanf("%d", &n);
    int x=n;
    while(n--)
    {
        scanf("%s", ss);
        for(int i=0; i<6; i++)
        {
            if(!strcmp(ss, str[i]))
            {
                flag[i]=1;
            }
        }
    }
    printf("%d\n", 6-x);
    for(int i=0; i<6; i++)
    {
        if(flag[i]==0) printf("%s\n", stak[i]);
    }

    return 0;

}
