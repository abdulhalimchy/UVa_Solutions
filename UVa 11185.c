#include<stdio.h>
int main()
{
    long long n;
    long long ara[5000], i;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            printf("0\n");
        else if(n<0)
            break;
        else
        {
            for(i=0; n>0; i++)
            {
                ara[i]=n%3;
                n=n/3;
            }
            for(i=i-1; i>=0; i--)
                printf("%lld", ara[i]);
            printf("\n");
        }
    }
    return 0;
}
