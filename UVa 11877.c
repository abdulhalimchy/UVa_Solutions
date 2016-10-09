#include<stdio.h>
int main()
{
    int n, s, a;
    while(scanf("%d", &n)==1)
    {
        a=n;
        if(n==0)
            break;
        s=0;
        while(n>1)
        {
            if(n==2){
                s+=1;
                break;
            }
            s+=n/3;
            n=(n/3)+(n%3);
        }
        printf("%d\n", s+a);
    }
    return 0;
}
