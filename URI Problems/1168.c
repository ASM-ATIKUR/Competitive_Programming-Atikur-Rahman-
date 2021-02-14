#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char a[100];

    scanf(" %d", &n);

    for(i=0; i<n; i++)
    {
        scanf(" %s", a);
        int count = 0;

        for(j=0; j< strlen(a); j++)
        {
            switch(a[j])
            {
                case '1': count+=2;
                break;

                case '2': count+=5;
                break;

                case '3': count+=5;
                break;

                case '4': count+=4;
                break;

                case '5': count+=5;
                break;

                case '6': count+=6;
                break;

                case '7': count+=3;
                break;

                case '8': count+=7;
                break;

                case '9': count+=6;
                break;

                case '0': count+=6;
                break;
            }
        }

        printf("%d leds\n", count);
    }

    return 0;
}
