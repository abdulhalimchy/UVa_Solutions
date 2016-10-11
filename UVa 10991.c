#include<stdio.h>
#include<math.h>
int main()
{
    int t, i;
    double r1, r2, r3, temp;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        temp=((r1*r1*acos(1-((2*r2*r3)/((r1+r2)*(r1+r3))))) + (r2*r2*acos(1-((2*r1*r3)/((r1+r2)*(r2+r3))))) + (r3*r3*acos(1-((2*r2*r1)/((r1+r3)*(r2+r3))))))*.5;
        temp= ((sqrt((r1*r2*r3)*(r1+r2+r3)))-temp);
        printf("%.6lf\n", temp);
    }
    return 0;
}
