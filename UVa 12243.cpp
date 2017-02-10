#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s=="*")
            break;
        int f=0;
        char ch = toupper(s[0]);
        for(int i=0; s[i]!=NULL; i++)
        {
            if(s[i]==' ' && ch!=toupper(s[i+1]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
