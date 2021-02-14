#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, i, j;
	char str[100];
	while(scanf("%s %d", str, &x)!=EOF)
	{
		int l=strlen(str);
		for(i=0; i<l-x; i++)
		{
			for(j=0; j<x; j++)
			{
				printf("%c", str[i+j]);
			}
			cout<<endl;
		}
	}
	return 0;
}
