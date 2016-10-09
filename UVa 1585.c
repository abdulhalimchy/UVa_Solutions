#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    char s[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        int j, count=0, sum=0;
        scanf("%s", s);
        for(j=0; s[j]!=0; j++)
        {
            if(s[j]=='O')
                count++;
            else
                count=0;
            sum+=count;
        }
        printf("%d\n", sum);
    }
    return 0;
}
