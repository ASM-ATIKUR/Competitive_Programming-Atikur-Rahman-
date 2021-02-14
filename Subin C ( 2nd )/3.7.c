#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp_in, *fp_out;
    int ch;

    fp_in = fopen("my_file.txt", "r");
    if(fp_in == NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    ch= fgetc(fp_in);
    printf("%c\n", (char)ch);
    ch= fgetc(fp_in);
    printf("%c\n", (char)ch);

    fseek(fp_in, 0, 0);
    ch= fgetc(fp_in);
    printf("%c\n", (char)ch);

    fclose(fp_in);

    return 0;
}
