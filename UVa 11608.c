#include<stdio.h>
int main()
{
    int n, i, a1[14], a2[14], j, k=1, sum;
    while(scanf("%d", &n)==1)
    {
        if(n<0)
            break;
        sum=n;
        for(j=0; j<12; j++)
            scanf("%d", &a1[j]);
        for(j=0; j<12; j++)
            scanf("%d", &a2[j]);

        printf("Case %d:\n", k);
        for(j=0; j<12; j++)
        {
            if(sum>=a2[j])
            {
                printf("No problem! :D\n");
                sum-=a2[j];
            }
            else
                printf("No problem. :(\n");
            sum+=a1[j];
        }
        k++;
    }
    return 0;
}
