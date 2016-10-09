#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    double n, temp;
    while(scanf("%lf", &n)==1)
    {
        if(n==0)
            break;
        temp=(sqrt(9+(8*n))+3)/2;
        temp=ceil(temp);
        printf("Case %d: %.0lf\n", i, temp);
        i++;
    }
    return 0;
}
