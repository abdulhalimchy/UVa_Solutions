#include<bits/stdc++.h>
#define LL long long
#define MX 100005
using namespace std;

int main()
{
    int t, mx;
    cin >> t;
    string s;
    getchar();
    for(int i=1; i<=t; i++)
    {
        mx=0;
        getline(cin, s);
        map<char, int> l;
        for(int j=0; s[j]!=NULL; j++)
        {
            if(s[j]==' ')
                continue;
            s[j]=tolower(s[j]);
            l[s[j]]++;
            mx = max(mx, l[s[j]]);
        }
        map<char, int> ::iterator j;
        for(j=l.begin(); j!=l.end(); j++)
        {
            if(j->second==mx)
            {
                cout << j->first;
            }
        }
        cout << endl;
    }
    return 0;
}
