#include<stdio.h>
int main()
{
    int t, i;
    float c, d, newC;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%f %f", &c, &d);
        newC=((9.0/5.0)*c)+32;
        newC=newC+d;
        newC=((newC-32.0)/9.0)*5.0;

        printf("Case %d: %.2f\n", i, newC);
    }
    return 0;
}
