#include<stdio.h>
int main()
{
    int bin[100000];
    int i,j, n, count;
    while(scanf("%d", &n)==1)
    {
        count=0;
        if(n==0)
            break;
        bin[0]=n%2;
        for(i=1; n/2>0; i++)
        {
            n=n/2;
            bin[i]=n%2;

        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
        {
            if(bin[j]==1)
                count++;
            printf("%d", bin[j]);
        }
        printf(" is %d (mod 2).\n", count);
    }
    return 0;
}
