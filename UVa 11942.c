#include<stdio.h>
int main()
{
    int n, ara[22][12], i, j, a=0, k, max, min;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<10; j++)
            scanf("%d", &ara[i][j]);
    }
    printf("Lumberjacks:\n");
    for(i=0; i<n; i++)
    {
        max=ara[i][0];
        min=101;
        for(j=0; j<10; j++)
        {
            if(ara[i][j]>max)
                max=ara[i][j];
        }
        for(j=0; j<10; j++)
        {
            if(ara[i][j]<min)
                min=ara[i][j];
        }
        if(ara[i][0]==max)
        {
           for(k=0; k<10-1; k++)
           {
               if(ara[i][k]<ara[i][k+1])
               {
                   a=1;
                   break;
               }
           }
           if(a!=1)
                printf("Ordered\n");
           else
                printf("Unordered\n");
            a=0;
        }
        else if(ara[i][0]==min)
        {
           for(k=0; k<10-1; k++)
           {
               if(ara[i][k]>ara[i][k+1])
               {
                   a=1;
                   break;
               }
           }
           if(a!=1)
                printf("Ordered\n");
           else
                printf("Unordered\n");
            a=0;
        }
        else
            printf("Unordered\n");
    }
    return 0;
}
