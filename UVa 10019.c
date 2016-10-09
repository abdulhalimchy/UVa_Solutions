#include<stdio.h>
int main()
{
    int t, i, n, b1, b2, lastdigit;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        b1=0, b2=0;
        scanf("%d", &n);
        int temp=n;
        while(n>0)
        {
            if(n%2==1)
                b1++;
            n=n/2;
        }
        n=temp;
        while(n>0)
        {
            lastdigit=n%10;
            n=n/10;
            if(lastdigit==1)
                b2++;
            else if(lastdigit==2)
                b2++;
            else if(lastdigit==3)
                b2+=2;
            else if(lastdigit==4)
                b2++;
            else if(lastdigit==5)
                b2+=2;
            else if(lastdigit==6)
                b2+=2;
            else if(lastdigit==7)
                b2+=3;
            else if(lastdigit==8)
                b2++;
            else if(lastdigit==9)
                b2+=2;
        }
        printf("%d %d\n", b1, b2);
    }
    return 0;
}
