#include<stdio.h>
#include<string.h>
int love(char s[])
{
    int count=0, i;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            count+=s[i]-96;
            else if(s[i]>='A'&&s[i]<='Z')
            count+=s[i]-64;
    }
    return count;
}
int ratio(int n)
{
    int sum=0;
    while(1)
    {
        while(n>0)
       {
           sum+=(n%10);
           n=n/10;
       }
       if(sum<10)
            break;
       n=sum;
       sum=0;
    }
    return sum;
}
int main()
{
   char p1[26], p2[26];
   int f1, f2;
   float Love, n1, n2;
   while(gets(p1))
   {
        gets(p2);
        f1=love(p1);
        f2=love(p2);

        f1=ratio(f1);
        n1=f1;
        f2=ratio(f2);
        n2=f2;
        if(n1>n2)
            Love=(n2/n1)*100.0;
        else
            Love=(n1/n2)*100.0;
        printf("%.2f %%\n", Love);
   }
   return 0;
}
