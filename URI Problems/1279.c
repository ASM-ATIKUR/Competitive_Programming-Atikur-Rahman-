#include <stdio.h>
#include <string.h>

int modulas(char *str, int l, int x);
int main()
{
    char str[100001];
    int l, i, j, z=0, huss=0;
    while(scanf(" %s", str)!=EOF)
    {
        l=strlen(str);
        z=0;
        if (huss==1)
        {
            printf("\n");
        }
        huss=1;
        if(modulas(str , l, 4)==1 && (modulas( str, l, 100))!=1 || modulas(str, l, 400)==1)
        {
            z=2;
            printf("This is leap year.\n");

        }
        if(modulas(str, l, 15)){
            printf("This is huluculu festival year.\n");
            if(z==0) z=1;
        }
        if(modulas(str, l, 55) && z==2){
            z=1;
            printf("This is bulukulu festival year.\n");
        }
        if(!z) printf("This is an ordinary year.\n");


    }
    return 0;
}
int modulas(char *str, int l, int x)
{
    int i, mod=0;
    for(i=0; i<l; i++)
    {
        mod=((mod*10)+(str[i]-'0'))%x;
    }
    if(mod==0) return 1;
    else return 0;
}
