#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        n = (n*(n+1)*((2*n)+1))/6;
        printf("%d\n", n);
    }
    return 0;
}
