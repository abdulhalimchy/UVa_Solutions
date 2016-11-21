#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 100005
int prime[size];
void seive()
{
    int i, root=sqrt(size), j;
    for(i=0; i<=size; i++)
        prime[i]=0;
    prime[0]=1;
    prime[1]=1;
    for(i=4; i<=size; i+=2)
    {
        prime[i]=1;
    }
    for(i=3; i<=root; i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i; j<=size; j+=i)
                prime[j]=1;
        }
    }
}

int main()
{
    seive();
    char s[300];
    int i,min, temp;
    while(scanf("%s", s)==1)
    {
        int len=strlen(s), t;
        min=0;
        if(len==1 && s[0]=='0')
            break;
        temp=0;
        if(len<=4)
        {
            temp=s[0]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            if(len>=2)
            {
                temp=(temp*10)+(s[1]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                t=temp;
                temp=s[1]-48;
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=t;
            }
            if(len>=3)
            {
                temp=(temp*10)+(s[2]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                t=temp;
                temp=s[2]-48;
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=s[1]-48;
                temp=(temp*10)+(s[2]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=t;
            }
            if(len==4)
            {
                temp=(temp*10)+(s[3]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=s[3]-48;
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=s[2]-48;
                temp=(temp*10)+(s[3]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }
                temp=s[1]-48;
                temp=(temp*10)+(s[2]-48);
                temp=(temp*10)+(s[3]-48);
                if(prime[temp]==0)
                {
                    if(min<temp)
                        min=temp;
                }

            }
        }
        for(i=0; i<len-4; i++)
        {
            temp=0;
            temp = (temp*10)+s[i]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
                temp=(temp*10)+(s[i+1]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;

            }
                temp =(temp*10)+(s[i+2]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
                temp =(temp*10)+(s[i+3]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
                temp =(temp*10)+(s[i+4]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
        }
        if(len>=5)
        {
            temp=s[len-4]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-3]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-2]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-1]-48;
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-4]-48;
            temp=(temp*10)+(s[len-3]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-3]-48;
            temp=(temp*10)+(s[len-2]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-2]-48;
            temp=(temp*10)+(s[len-1]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-4]-48;
            temp=(temp*10)+(s[len-3]-48);
            temp=(temp*10)+(s[len-2]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-3]-48;
            temp=(temp*10)+(s[len-2]-48);
            temp=(temp*10)+(s[len-1]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
            temp=s[len-4]-48;
            temp=(temp*10)+(s[len-3]-48);
            temp=(temp*10)+(s[len-2]-48);
            temp=(temp*10)+(s[len-1]-48);
            if(prime[temp]==0)
            {
                if(min<temp)
                    min=temp;
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
