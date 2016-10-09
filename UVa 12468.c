#include<stdio.h>
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)==2)
    {
        if(a==-1 && b==-1)
            break;
        a=abs(a-b);
        b=99-a;
        if(a<b)
            printf("%d\n", a);
        else
            printf("%d\n", b+1);
    }
    return 0;
}
