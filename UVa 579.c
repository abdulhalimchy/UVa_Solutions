#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, angle, temp;
    char ch;
    while(scanf("%lf", &a)==1)
    {
        scanf("%c", &ch);
        scanf("%lf", &b);
        if(a==0 && b==0)
            break;
        temp=fabs((30.0*a)-(b*5.5));
        angle=(360-temp);
        if(temp<angle)
            angle=temp;
        printf("%.3lf\n", angle);
    }
    return 0;
}
