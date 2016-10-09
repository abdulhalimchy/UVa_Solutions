#include<stdio.h>
int main()
{
    int t, i, ara[12], n, j, k;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
        }
        for(j=0; j<n-1; j++)
        {
            for(k=0; k<n-j-1; k++)
            {
                if(ara[k]>ara[k+1])
                {
                    int temp=ara[k];
                    ara[k]=ara[k+1];
                    ara[k+1]=temp;
                }
            }
        }
        printf("Case %d: %d\n", i, ara[(n/2)]);
    }
    return 0;
}
