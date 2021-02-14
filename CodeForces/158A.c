#include <stdio.h>
#include <string.h>

int main()
{
    char w[100], word1[100];
    int i, c, u=0, s=5, l;

    scanf(" %s", w);
    printf("%d\n", strlen(w));

    l = strle(w);

    printf("%d\n%s\n", l, w);
    printf("%d\n", strlen(w));



    for(i=0; i<l; i++)
    {
        if(w[i]>='A' && w[i]<='Z')
        {
            word1[i] = w[i]-'A'+'a';
            u++;
        }
        else
        {
            if(i==0)
            {
                s=1;
            }

            word1[i]= w[i]-'a'+'A';
        }
    }
    word1[i]='\0';


    if((u-s)>=(l-2))
    {
        printf("%s\n", word1);
    }
    else
    {
        printf("%s\n", w);
    }

    printf("%s", w);

    return 0;
}
