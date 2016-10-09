#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002][13], num[13];
    int t, n, i, j, k, count;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
            scanf("%s", s[j]);
        scanf("%s", num);
        printf("Case %d:\n", i);
        for(j=0; j<n; j++)
        {
            count=0;
            for(k=0; k<strlen(num); k++)
            {
                if(s[j][k]!=num[k])
                    count++;
            }
            if(count<=1)
                printf("%s\n", s[j]);
        }
    }
    return 0;
}
