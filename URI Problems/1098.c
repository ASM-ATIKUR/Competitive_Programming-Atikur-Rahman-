#include <stdio.h>

int main()
{
    float i, j;

    for(i=0; i<2.2; i+=0.2)
    {
        for(j=1; j<4; j++)
        {
            if(i<0.2|| i<1.1&&i>.9 || i>1.98&&i<2.02)
                {
                    printf("I=%d J=%d\n", (int)i, (int)(j+i));
                }
               else{
                    printf("I=%.1f J=%.1f\n", i, j+i);
               }
        }

    }
    return 0;

}

