#include<stdio.h>
int main()
{
    int t, i, a1, b1, c1, a2, b2, c2;
    char a, b, c, d;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %c %d %c %d %d %c %d %c %d", &a1, &a, &b1, &b, &c1, &a2, &c, &b2, &d, &c2);
        if(a2>a1)
            b2+=1;
        if(b2>b1)
            c2+=1;
        int age=c1-c2;
        if(age<0)
            printf("Case #%d: Invalid birth date\n", i);
        else if(age>130)
            printf("Case #%d: Check birth date\n", i);
        else
            printf("Case #%d: %d\n", i, age);
    }
    return 0;
}
