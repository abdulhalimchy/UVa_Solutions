#include<stdio.h>
int main()
{
    int t, i, n, ara[102], j, max;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        max=0;
        scanf("%d", &n);
        for(j=0; j<n; j++)
            scanf("%d", &ara[j]);
        for(j=0; j<n; j++)
        {
            if(ara[j]>max)
                max=ara[j];
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
