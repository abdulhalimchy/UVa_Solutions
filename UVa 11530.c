#include<stdio.h>
#include<string.h>
int main()
{
  char str[102];
  int t, i, j, count;
  scanf("%d", &t);
  for(i=0; i<=t; i++)
  {
      gets(str);
      j=0;
      count=0;
      while(j<strlen(str))
      {
          if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ')
            count++;
          else if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x')
            count+=2;
          else if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y')
            count+=3;
          else if(str[j]=='s' || str[j]=='z')
            count+=4;
        j++;
      }
      if(i!=0)
        printf("Case #%d: %d\n", i, count);
  }
  return 0;
}
