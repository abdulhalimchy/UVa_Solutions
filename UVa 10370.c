#include<stdio.h>
int main()
{
    int t, i, n, j, count;
    float ara[1002], sum;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        count=0;
        sum=0;
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%f", &ara[j]);
        }
        for(j=0; j<n; j++)
        {
            sum+=ara[j];
        }
        sum=sum/n;
        for(j=0; j<n; j++)
        {
            if(ara[j]>sum)
                count++;
        }
        sum=(100.0*count)/n;
        printf("%.3f%%\n", sum);
    }
    return 0;
}
