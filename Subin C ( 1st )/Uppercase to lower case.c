#include<stdio.h>

int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};

    int i, length;
    printf("%s\n", country);
    length = 10;

    for(i=0; i<length; i++)
    {
        if(country[i]=='B'){
            continue;
        }
        else {


            if(country[i] >='A' && country[i]<= 'Z')
            {
                country[i]= 'a' + (country[i]- 'A');
            }
        }

    }
    printf("%s \n", country);

    return 0;
}
