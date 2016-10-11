#include<stdio.h>
int main()
{
    int t, i;
    double ara[15];
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int j, temp;
        double sum=0;
        for(j=0; j<12; j++)
        {
            scanf("%lf", &ara[j]);
            sum+=ara[j];
        }
        sum=sum/12.0;
        if(sum<1000)
        {
            printf("%d $%.2lf\n", i, sum);
            continue;
        }
        temp=sum/1000;
        sum=sum-(temp*1000);
        printf("%d $%d,%.2lf\n", i, temp, sum);
    }
    return 0;
}
