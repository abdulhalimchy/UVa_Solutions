#include<stdio.h>
int main()
{
    int i, j, k, n;
    int count, maxlen;
    while(scanf("%d %d", &i, &j)==2)
    {
        int a=i, b=j;
        if(i>j)
        {
            int t=i;
            i = j;
            j=t;
        }
        maxlen=0;
        for(k=i; k<=j; k++)
        {
            n=k;
            count=0;
            while(1)
                {
                    if(n==1)
                    {
                        count++;
                        break;
                    }
                    else if(n%2==1){
                        n=(3*n)+1;
                        count++;

                    }
                    else{
                        n=n/2;
                        count++;
                    }
                }
            if(count>maxlen)
                    maxlen=count;
        }
         printf("%d %d %d\n", a, b, maxlen);
    }
    return 0;
}
