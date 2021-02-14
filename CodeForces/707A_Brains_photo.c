#include <stdio.h>

int main()
{
    int c=0, m=0, y=0, n, b, i;
    char ch;
    scanf("%d %d", &n, &b);
    i=b*n;
    while(i--)
    {
        scanf(" %c", &ch);

        switch(ch)
        {
            case 'C': c=1;
            break;
            case 'M': m=1;
            break;
            case 'Y': y=1;
            break;
        }
    }
    if(c || m || y) printf("#Color\n");
    else printf("#Black&White\n");

    return 0;
}
