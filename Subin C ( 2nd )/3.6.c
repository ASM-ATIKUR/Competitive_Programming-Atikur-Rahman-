#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp_in, *fp_out;
    int ch;

    fp_in = fopen("Pro.jpg", "rb");
    if(fp_in == NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    fp_out = fopen("Pro2.jpg", "wb");

    while(1)
    {
        ch = fgetc(fp_in);
        if(ch==EOF)
            break;
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
