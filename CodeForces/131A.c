#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    char word1[100];
    int i, c, u=0, s=0, l;

    scanf(" %s", word);
    l=strlen(word);

    for(i=0; i<strlen(word); i++)
    {
        if(word[i]>='A' && word[i]<='Z')
        {
            word1[i] = word[i]-'A'+'a';
            u++;
        }
        else
        {
            if(i==0)
            {
                s=1;
            }
            else
            {
                s=4;
            }

            word1[i]= word[i]-'a'+'A';
        }
        printf("%s\n%s\n", word, word1);
    }
    word1[i]='\0';

    if((u-s)>=(l-2))
    {
        printf("%s\n", word1);
    }
    else
    {
        printf("%s\n", word);
    }

    return 0;
}
