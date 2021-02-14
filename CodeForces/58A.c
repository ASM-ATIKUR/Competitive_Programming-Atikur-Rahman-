#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], c;

    scanf(" %s", s);

    int l=strlen(s), i, letter_count=0, j=0, b;

    for(letter_count=0; letter_count<5;)
    {
        b =letter_count;
        switch(letter_count)
        {
            case 0 : c = 'h';
            break;

            case 1 : c = 'e';
            break;

            case 2 : c = 'l';
            break;

            case 3 : c = 'l';
            break;

            case 4 : c = 'o';
            break;
        }

        for(; j<l; j++)
        {
            if(s[j] == c)
            {
                letter_count++;
                j++;
                break;
            }
        }
        if(b == letter_count)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
