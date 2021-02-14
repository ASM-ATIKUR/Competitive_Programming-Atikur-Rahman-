#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[55];
    int i=0, cnt=INT_MAX, n, a, c, t, g, x;

    scanf("%d", &n);
    scanf("%s", s);
//    for(int i=0; i<26; i++)
//    {
//        a= min((s[i]-'A'), 25-(s[i]-'A')+1);
//    c= min(abs(s[i]-'A'-2), abs(25-(s[i]-'A')+3));
//    t= min(abs(s[i]-'A'-19), abs(25-(s[i]-'A')+20));
//    g= min(abs(s[i]-'A'-6), abs(25-(s[i]-'A')+7));
//    printf("%d %d %d %d.....\n", a, c, t, g);
//    }
//    a= min((s[i]-'A'), 25-(s[i]-'A')+1);
//    c= min(abs(s[i+1]-'A'-2), abs(25-(s[i+1]-'A')+3));
//    t= min(abs(s[i+2]-'A'-19), abs(25-(s[i+2]-'A')+20));
//    g= min(abs(s[i+3]-'A'-6), abs(25-(s[i+3]-'A')+7));
//    cnt=a+c+t+g;
//    printf("%d %d %d %d\n", a, c, t, g);
    for(i=0; i<n-3; i++)
    {
        a= min((s[i]-'A'), 26-(s[i]-'A'));
        if(s[i+1]>'C')
            c=min(s[i+1]-'C', 26-s[i+1]+'C');
        else
            c=min('C'-s[i+1], 26-'C'+s[i+1]);

        if(s[i+2]>'T')
            t=min(s[i+2]-'T', 26-s[i+2]+'T');
        else
            t=min('T'-s[i+2], 26-'T'+s[i+2]);

        if(s[i+3]>'G')
            g=min(s[i+3]-'G', 26-s[i+3]+'G');
        else
            g=min('G'-s[i+3], 26-'G'+s[i+3]);
        //c= min(abs(s[i+1]-'A'-2), abs(25-(s[i+1]-'A')+3));
//        t= min(abs(s[i+2]-'A'-19), abs(25-(s[i+2]-'A')+20));
//        g= min(abs(s[i+3]-'A'-6), abs(25-(s[i+3]-'A')+7));
//        if(cnt>a+c+t+g)
//            printf("%c%c%c%c\n", s[i], s[i+1], s[i+2], s[i+3]);
        cnt=min(cnt, a+c+t+g);
        //printf("%d %d %d %d\n", a, c, t, g);
    }
    /*for(int i=0; i<n-3;  i++)
    {
        a= min((s[i]-'A'), 26-(s[i]-'A'));
        //cnt=a;
        for(int j=i+1; j<n-2; j++)
        {
            c= min(abs(s[j]-'A'-2), abs(25-(s[j]-'A')+3));
           // cnt+=c;
            for(int k=j+1; k<n-1; k++)
            {
                t= min(abs(s[k]-'A'-19), abs(25-(s[k]-'A')+20));
                //cnt+=t;
                for(int l=k+1; l<n; l++)
                {
                    g= min(abs(s[l]-'A'-6), abs(25-(s[l]-'A')+7));
                    //cnt+=g;
                    printf("%d %d %d %d\n", a, c, t, g);
                    cout<<cnt<<endl;
                    cnt=min(cnt, a+c+t+g);
                }
            }
        }
    }*/
    cout<<cnt<<endl;

    return 0;
}


//ABCDEFGHIJKLMNOPQRSTUVWXYZ
