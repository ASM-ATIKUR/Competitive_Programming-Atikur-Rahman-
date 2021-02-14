#include <stdio.h>

int main()
{
    int n, t, i, j;
    char ara[51], temp;
    scanf("%d %d %s", &n, &t, ara);
    ara[n]='\0';

    for(j=0; j<t; j++)
    {
        for(i=0; i<n;)
        {
            if(ara[i]=='B' && ara[i+1]=='G')
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
                i+=2;
            }
            else i++;
        }
    }
    printf("%s\n", ara);

    return 0;
}
