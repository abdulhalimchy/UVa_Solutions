#include<stdio.h>
int main()
{
    int t, ara[10], i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &ara[j]);
        }
        if(ara[0]==1 && ara[1]==2 && ara[2]==3 && ara[3]==4 && ara[4]==5)
            printf("Y\n");
        else if(ara[0]==2 && ara[1]==3 && ara[2]==4 && ara[3]==5 && ara[4]==6)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
