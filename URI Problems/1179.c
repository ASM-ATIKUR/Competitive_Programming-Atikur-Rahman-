#include<stdio.h>
int main()
{
    int par[5], impar[5], n, i, j, pcount=0, icount =0;

    for(i=0; i<15; i++)
    {
        scanf(" %d", &n);
        if(n%2==0)
        {
            par[pcount]=n;
            pcount++;
        }
        else
        {
            impar[icount] = n;
            icount++;
        }

        if(pcount==5)
        {
            for(j=0; j<5; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }
            pcount=0;
        }
        else if(icount==5)
        {
            for(j=0; j<5; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            icount =0;
        }
        if(i==14){

            for(j=0; j<icount; j++)
            {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            for(j=0; j<pcount; j++)
            {
                printf("par[%d] = %d\n", j, par[j]);
            }

        }

    }



    return 0;
}
