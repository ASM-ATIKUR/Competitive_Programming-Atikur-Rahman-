#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, max=0;
    char str[111], gram[5];
    scanf("%d", &n);
    scanf("%s", str);

    for(i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(str[i]==str[j] && str[i+1]==str[j+1])
                cnt++;
        }
        if(cnt>max)
        {
            gram[0]=str[i];
            gram[1]=str[i+1];
            gram[2]='\0';
        }
    }
    printf("%s\n", gram);

    return 0;
}
