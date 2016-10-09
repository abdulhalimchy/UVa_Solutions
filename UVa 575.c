#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[500];
    int i, j, sum;
    while(scanf("%s", &s)==1)
    {
        int len=strlen(s);
        if(len==1 && s[0]=='0')
            break;
        sum=0;
        for(i=len-1, j=1; i>=0; i--, j++)
        {
            if(s[i]=='0')
            {
                sum+=0;
            }
            else if(s[i]=='1')
            {
                sum+=(pow(2,j)-1);
            }
            else if(s[i]=='2')
            {
                sum+=(2*(pow(2,j)-1));
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
