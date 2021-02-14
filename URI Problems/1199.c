#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char num[15]={0};

    while(1)
    {
        scanf(" %s", num);
        int l=strlen(num), n=0, j, i;
        if(num[0]=='-') break;
        else if(num[1]=='x')
        {
            for(i=l-1, j=0; i>=2; i--, j++)
            {
                switch(num[i])
                {
                case 'A': n+=10*pow(16, j);
                    break;
                case 'a': n+=10*pow(16, j);
                    break;
                case 'B': n+=11*pow(16, j);
                    break;
                case 'b': n+=11*pow(16, j);
                    break;
                case 'C': n+=12*pow(16, j);
                    break;
                case 'c': n+=12*pow(16, j);
                    break;
                case 'D': n+=13*pow(16, j);
                    break;
                case 'd': n+=13*pow(16, j);
                    break;
                case 'E': n+=14*pow(16, j);
                    break;
                case 'e': n+=14*pow(16, j);
                    break;
                case 'F': n+=15*pow(16, j);
                    break;
                case 'f': n+=15*pow(16, j);
                    break;
                }

                if(num[i]>='0' && num[i]<='9') n+=(num[i]-'0')*pow(16, j);
            }
            printf("%d\n", n);
        }
        else
        {
            for(i=l-1, j=0; i>=0; i--, j++)
            {
                n+=(num[i]-'0')*pow(10, j);
            }
            printf("0x%X\n", n);
        }

    }
}
