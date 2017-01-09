#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t, i;
    map<string, int> tree;
    string a;
    scanf("%d", &t);
    getchar();
    getline(cin, a);
    for(i=1; i<=t; i++)
    {
        vector<string> s;
        int count=0;
        while(1)
        {
            getline(cin, a);
            if(a.length()==0)
                break;
            else
            {
                count++;
                if(tree[a]==0)
                    s.push_back(a);
                tree[a]++;
            }
        }
        sort(s.begin(), s.end());
        int j, k=s.size();
        double per;
        for(j=0; j<k; j++)
        {
            cout << s[j] << " ";
            per=((100.0*tree[s[j]])/count);
            printf("%.4lf\n", per);
        }
        if(i<t)
            printf("\n");
        tree.clear();
    }
    return 0;
}
