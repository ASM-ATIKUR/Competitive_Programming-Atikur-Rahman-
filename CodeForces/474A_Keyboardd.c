#include <stdio.h>
#include <string.h>

int main()
{
    char ch, key[4][15]={"qwertyuiop", "asdfghjkl;","zxcvbnm,./"}, str[120];
    int x=1;
    scanf("%c", &ch);
    scanf("%s", str);

    if(ch=='R') x=-1;


    for(int k=0; k<strlen(str); )
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<10; j++)
            {
                if(str[k]==key[i][j])
                {
                    str[k]=key[i][j+x];
                    goto jump;
                }

            }
        }
        jump: k++;
    }
    puts(str);

    return 0;

}
