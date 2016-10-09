#include<stdio.h>
int main()
{
    int t, i, n, ara[10002], j, zero, one, two, three, four, five, six, seven, eight, nine,k;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int lastdigit;
        zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
        scanf("%d", &n);
        for(j=0, k=1; j<n; j++, k++)
        {
            ara[j]=k;
        }
        for(j=0; j<n; j++)
        {
            for(k=0; ara[j]>0; k++)
            {
                lastdigit=ara[j]%10;
                ara[j]=ara[j]/10;

                if(lastdigit==0)
                    zero++;
                if(lastdigit==1)
                    one++;
                if(lastdigit==2)
                    two++;
                if(lastdigit==3)
                    three++;
                if(lastdigit==4)
                    four++;
                if(lastdigit==5)
                    five++;
                if(lastdigit==6)
                    six++;
                if(lastdigit==7)
                    seven++;
                if(lastdigit==8)
                    eight++;
                if(lastdigit==9)
                    nine++;

            }

        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven ,eight, nine);
    }
    return 0;
}
