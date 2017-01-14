#include<stdio.h>
int main()
{
    int n, ara[300][300], i, j, k, flag=0;
    while(scanf("%d", &n)==1)
    {
        if(flag==1)
            printf("\n");
        flag=1;
        int sum=((n*n)*((n*n)+1))/2;
        sum/=n;
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=n; j++)
            {
                ara[i][j]=0;
            }
        }
        i=n, j=(n/2)+1;
        ara[i][j]=1;
        for(k=2; k<=n*n; k++)
        {
            int p=i, q=j;
            i=i+1, j=j+1;
            if(i>n)
                i=i/n;
            if(j>n)
                j=j/n;
            if(ara[i][j]==0)
                ara[i][j]=k;
            else
            {
                i=p-1, j=q;
                ara[i][j]=k;
            }
        }
        printf("n=%d, sum=%d\n", n, sum);
        for(i=n; i>=1; i--)
        {
            for(j=1; j<=n; j++)
            {
                if(n==3)
                    printf(" %d", ara[i][j]);
                else if(n>3 && n<10)
                    printf(" %2d", ara[i][j]);
                else if(n>=10)
                    printf(" %3d", ara[i][j]);

            }
            printf("\n");
        }
    }
    return 0;
}
