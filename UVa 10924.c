#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    int root=sqrt(n), i;
    for(i=3; i<=root; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int sum, i;
    char s[22];
    while(gets(s))
    {
        sum=0;
        for(i=0; s[i]!=NULL; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                sum+=26-('z'-s[i]);
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                sum+=52-('Z'-s[i]);
            }
        }
        if(prime(sum)==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
