#include<stdio.h>
#include<string.h>
int main()
{
    int t, n, i, j;
    char s1[50][102], s2[102][102];
    scanf("%d", &t);
    for(i=0; i<=(2*t); i++)
        {
            gets(s1[i]);
        }
    scanf("%d", &n);
    for(j=0; j<=n; j++)
    {
        gets(s2[j]);
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=(2*t); i+=2)
        {
            if(strcmp(s2[j], s1[i])==0)
                puts(s1[i+1]);
        }
    }
    return 0;
}
