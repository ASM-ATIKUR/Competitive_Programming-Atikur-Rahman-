#include <stdio.h>
#include <string.h>

int main()
{
    char input[3][20];
    scanf(" %s %s %s", input[0], input[1], input[2]);

    if(0==strcmp(input[0], "vertebrado"))
    {
        if(0==strcmp(input[1], "ave"))
        {
            if(0==strcmp(input[2], "carnivoro"))
            {
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else
        {
            if(0==strcmp(input[2], "onivoro"))
            {
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(0==strcmp(input[1], "inseto"))
        {
            if(0==strcmp(input[2], "hematofago"))
            {
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else
        {
            if(0==strcmp(input[2], "hematofago"))
            {
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
