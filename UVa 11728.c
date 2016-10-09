#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, sum, temp, k=1, j;
    while(scanf("%d", &n)==1)
    {
        temp=0;
        if(n==0)
            break;
        for(i=1; i<=n; i++)
        {
            sum=0;
            for(j=1; j<=i; j++)
            {
                if((i/j)*j==i)
                {
                    sum+=j;
                }
            }
            if(sum==n)
            {
                temp=i;
            }
        }
        if(temp!=0)
            printf("Case %d: %d\n", k, temp);
        else
            printf("Case %d: -1\n", k);
        k++;
    }
    return 0;
}
