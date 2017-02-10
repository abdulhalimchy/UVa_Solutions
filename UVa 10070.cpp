#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[1000], t=0;
    while(cin >> s)
    {
        if(t==1)
            printf("\n");
        t=1;
        int num=0, i, leap=0, hulu=0, bulu=0;
        for(i=0; s[i]!=NULL; i++)
        {
            num =(num*10)+(s[i]-48);
            num = num%400;
        }
        if(num==0)
        {
            leap=1;
        }
        else
        {
            int n=0, m=0;
            for(i=0; s[i]!=NULL; i++)
            {
                n=(n*10)+(s[i]-48);
                n=n%4;
            }
            if(n==0)
            {
                for(i=0; s[i]!=NULL; i++)
                {
                    m=(m*10)+(s[i]-48);
                    m=m%100;
                }
            }
            if(m!=0)
                leap=1;
        }
        num=0;
        for(i=0; s[i]!=NULL; i++)
        {
            num =(num*10)+(s[i]-48);
            num = num%15;
        }
        if(num==0)
            hulu=1;
        if(leap==1)
        {
            num=0;
            for(i=0; s[i]!=NULL; i++)
            {
                num =(num*10)+(s[i]-48);
                num = num%55;
            }
            if(num==0)
                bulu=1;
        }
        if(leap==1)
            printf("This is leap year.\n");
        if(hulu==1)
            printf("This is huluculu festival year.\n");
        if(bulu==1)
            printf("This is bulukulu festival year.\n");
        if(leap==0 && hulu==0 && bulu==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
