#include<stdio.h>
int main()
{
    long int t, i, a, b, c;
    scanf("%ld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);
        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c)
                printf("Case %d: Equilateral\n", i);
            else if(a==b || b==c || c==a)
                printf("Case %d: Isosceles\n", i);
            else if(a!=b && b!=c && c!=a)
                printf("Case %d: Scalene\n", i);
        }
        else
            printf("Case %d: Invalid\n", i);
    }
    return 0;
}
