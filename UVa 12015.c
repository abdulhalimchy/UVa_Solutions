#include<stdio.h>
#include<string.h>
int main()
{
    char s[12][102];
    int t, i, ara[12], j, max;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        for(j=1; j<=10; j++)
        {
            scanf("%s", s[j]);
            scanf("%d", &ara[j]);
        }
        max=ara[1];
        for(j=1; j<=10; j++)
        {
            if(ara[j]>max)
                max=ara[j];
        }
        printf("Case #%d:\n", i);
        for(j=1; j<=10; j++)
        {
            if(ara[j]==max)
            {
                printf("%s\n", s[j]);
            }
        }

    }
    return 0;
}
