#include<bits/stdc++.h>
#define MX 100005
using namespace std;
int lps[MX];

void generate_lps(string pattern, int patternSize)
{
    int i=1, j=0;
    lps[0]=-1, lps[1]=0;

    while(i<patternSize)
    {
        while(j>=0 && pattern[i]!=pattern[j])
        {
            j=lps[j];
        }
        i++, j++;
        lps[i]=j;
    }
}

int kmp(string text, string pattern, int textSize, int patternSize)
{
    generate_lps(pattern, patternSize);
    int i=0, j=0;

    while(i<textSize)
    {
        while(j>=0 && pattern[j]!=text[i])
        {
            j=lps[j];
        }
        i++, j++;
    }
    return j;
}

void reverse_string(string &str, int sizeOfstr)
{
    int sz=sizeOfstr/2;
    for(int i=0, j=sizeOfstr-1; i<sz; i++, j--)
    {
        swap(str[i],str[j]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    string text;
    while(cin >> text)
    {
        string pattern;
        int sz=text.size();
        pattern=text;
        reverse_string(pattern, sz);
        int co=kmp(text, pattern, sz, sz);
        co=(sz-co);
        cout << text;
        for(int i=co-1; i>=0; i--)
            cout << text[i];
        cout << endl;
    }
    return 0;
}
