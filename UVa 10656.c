#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        int ara1[1005], ara2[1005], i, sum=0, j=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara1[i]);
        }
        for(i=0; i<n; i++)
        {
            if(ara1[i]!=0)
            {
                ara2[j]=ara1[i];
                j++;
            }
            sum+=ara1[i];
        }
        for(i=0; i<j; i++)
        {
            printf("%d", ara2[i]);
            if(i!=j-1)
                printf(" ");
        }
        if(sum!=0)
            printf("\n");
        else
            printf("0\n");

    }
    return 0;
}
