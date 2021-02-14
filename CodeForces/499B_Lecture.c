#include <stdio.h>
#include <string.h>

int main(void)
{
    char lan1[3001][12], lan2[3001][12], note[3001][12], ans[3001][12];
    int i, j, n, m;
    scanf("%d %d", &n, &m);

    for(i=0; i<m; i++)
    {
        scanf("%s %s", lan1[i], lan2[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%s", note[i]);

        for(j=0; j<m; j++)
        {
            if(strcmp(note[i], lan1[j])==0)
            {
                if(strlen(lan1[j])>strlen(lan2[j]))
                    strcpy(ans[i], lan2[j]);
                else strcpy(ans[i], lan1[j]);
                break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(i<n-1)
            printf("%s ", ans[i]);
        else printf("%s\n", ans[i]);
    }

    return 0;
}
