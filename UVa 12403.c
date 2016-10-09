#include<stdio.h>
#include<string.h>
int main()
{
   int t, i;
   long long sum=0, k;
   char s[20];
   scanf("%d", &t);
   for(i=0; i<t; i++)
   {
       scanf("%s", s);
       if(s[0]=='d')
        {
            scanf("%lld", &k);
            sum+=k;
        }
        if(s[0]=='r')
            printf("%lld\n", sum);

   }
    return 0;
}
