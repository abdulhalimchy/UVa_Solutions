#include<stdio.h>
int fact[9]={0, 1, 2, 6, 24, 120, 720, 5040, 40320};
int main()
{
    int n, sum, c, i;
    while(scanf("%d", &n)==1)
    {
        sum=0, c=0, i=8;
        while(sum!=n)
        {
            if(sum+fact[i]>n && i!=1)
            {
                i--;
            }
            if(sum+fact[i]<=n)
            {
                sum+=fact[i];
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
