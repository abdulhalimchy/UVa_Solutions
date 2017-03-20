#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while(cin >> a >> b)
    {
        if(a.size()==1 && b.size()==1 && a[0]=='0' && b[0]=='0')
            break;
        int carry=0, temp=0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int mx = max(a.size(), b.size());
        for(int i=0; i<mx; i++)
        {
            if(a[i]>=48 && a[i]<=57)
                temp+=(a[i]-48);
            if(b[i]>=48 && b[i]<=57)
                temp+=(b[i]-48);
            if(temp>9)
            {
                temp=temp/10;
                carry++;
            }
            else
                temp=0;
        }
        if(carry==0)
            printf("No carry operation.\n");
        else if(carry==1)
            printf("%d carry operation.\n", carry);
        else
            printf("%d carry operations.\n", carry);
        for(int i=0; i<a.size(); i++)
        {
            a[i]='\0';
        }
        for(int i=0; i<b.size(); i++)
        {
            b[i]='\0';
        }
    }
    return 0;
}
