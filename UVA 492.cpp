#include<bits/stdc++.h>
#define LL long long
#define MX 1005
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        int len=s.size(), word=0;
        char temp='\0';
        for(int i=0; i<=len; i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                word++;
                if(word==1 && (s[i]!='A' && s[i]!='a' && s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i' && s[i]!='O' && s[i]!='o' && s[i]!='U' && s[i]!='u'))
                {
                    temp=s[i];
                }
                else
                    cout << s[i];
            }
            else if(word!=0)
            {
                if(temp!='\0')
                {
                    cout << temp << "ay";
                    if(s[i]!=NULL)
                        cout << s[i];
                }
                else
                {
                    cout << "ay";
                   if(s[i]!=NULL)
                        cout << s[i];
                }
                temp='\0';
                word=0;
            }
            else if(s[i]!=NULL)
                cout << s[i];

        }
        cout << endl;
    }
    return 0;
}
