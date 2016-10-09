#include<stdio.h>
int main()
{
    int n, i, l, ara[52], j, k, count;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        count = 0;
        scanf("%d", &l);
        for(j=0; j<l; j++)
        {
            scanf("%d", &ara[j]);
        }
        for(j=0; j<l-1; j++)
        {
            for(k=0; k<l-1-j; k++)
                if(ara[k]>ara[k+1])
            {
                int t=ara[k];
                ara[k]=ara[k+1];
                ara[k+1]=t;
                count++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
    return 0;
}
