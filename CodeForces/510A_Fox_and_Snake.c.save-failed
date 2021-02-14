#include <stdio.h>

int main()
{
    int n, m, i, s=1, j;
    scanf(" %d %d", &n, &m);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(!(i%2)){
                if(s)
                {
                    if(j==m)
                    {
                        printf("#");
                    }
                    else printf(".");

                }
                else
                {
                    if(j==1) printf("#");
                    else printf(".");
                }
            }

            else printf("#");
        }
        if(!(i%2)){
            if(s) s=0;
            else s=1;
        }
        printf("\n");

    }
    return 0;

}
