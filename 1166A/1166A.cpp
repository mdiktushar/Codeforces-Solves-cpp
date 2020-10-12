#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<char>ch;

    for(int i=0; i<n; i++)
    {
        string s;cin>>s;
        ch.push_back(s[0]);
    }

    sort(ch.begin(), ch.end());

    int res = 0;

    while(ch.size()!=0)
    {
        char c = ch.front();

        if(ch.front()==ch.back())
        {
            int n = ch.size();
            int n1 = n/2;
            res += ((n1-1)*n1)/2;
            if(n%2!=0)n1++;
            res += ((n1-1)*n1)/2;
            ch.clear();
        }
        else
        {
            int n=0;
            while(ch.front()==c)
            {
                n++;
                ch.erase(ch.begin());
            }
            int n1 = n/2;
            res += ((n1-1)*n1)/2;
            if(n%2!=0)n1++;
            res += ((n1-1)*n1)/2;
        }
    }
    cout<<res<<endl;

    return 0;
}
