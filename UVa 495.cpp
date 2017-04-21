#include<iostream>
#include<stdio.h>
#include<string>
#define MX 5005
#include<map>
#include<algorithm>
using namespace std;
map<int, string> fibb;

string sum(string a, string b)
{
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    char temp[5000];
    int len=max(a.size(), b.size()), p=0, t=0;
    for(int i=0; i<len; i++)
    {

        if((a[i]>='0' && a[i]<='9') && (b[i]>='0' && b[i]<='9'))
        {

            if((a[i]-48)+(b[i]-48)+t<10)
            {
                temp[p]=(a[i]-48)+(b[i]-48)+t+48;
                p++;
                t=0;
            }
            else
            {
                temp[p]=((a[i]-48)+(b[i]-48)+t)%10+48;
                p++;
                t=((a[i]-48)+(b[i]-48)+t)/10;
            }

        }
        else if(a[i]>='0' && a[i]<='9')
        {
            if((a[i]-48)+t<10)
            {
                temp[p]=(a[i]-48)+t+48;
                p++;
                t=0;
            }
            else
            {
                temp[p]=((a[i]-48)+t)%10+48;
                p++;
                t=((a[i]-48)+t)/10;
            }
        }
        else if(b[i]>='0' && b[i]<='9')
        {
            if((b[i]-48)+t<10)
            {
                temp[p]=(b[i]-48)+t+48;
                p++;
                t=0;
            }
            else
            {
                temp[p]=((b[i]-48)+t)%10+48;
                p++;
                t=((b[i]-48)+t)/10;
            }
        }
    }
    if(t!=0)
    {
        temp[p]=t+48;
        temp[p+1]='\0';

    }
    else
        temp[p]='\0';
    string tt=temp;
    reverse(tt.begin(), tt.end());
    return tt;
}

string fib(int n)
{
    if(fibb[n]!="\0")
        return fibb[n];
    fibb[n]=sum(fib(n-1),fib(n-2));
    return fibb[n];
}
int main()
{
    int n;
    fibb[0]="0";
    fibb[1]="1";
    fibb[2]="1";
    string s=fib(5000);
    while(scanf("%d", &n)==1)
    {
        cout << "The Fibonacci number for " << n << " is " << fib(n) << endl;
    }
    return 0;
}
