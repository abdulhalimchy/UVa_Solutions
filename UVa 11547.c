#include<stdio.h>
int main()
{
    int t, n, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        n=(((((n*567)/9)+7492)*235)/47)-498;
        n=n/10;
        n=abs(n%10);
        printf("%d\n", n);
    }
    return 0;
}
