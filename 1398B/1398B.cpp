#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        vector<int>v;
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                c++;
            if(s[i]=='1' && s[i+1]=='0' &&  i+1<s.size())
            {
                v.push_back(c);
                c=0;
            }
            if(i==s.size()-1)
                v.push_back(c);

        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int result = 0;
        for(int i=0; i<v.size(); i+=2)
            result+=v[i];
        cout<<result<<endl;
    }
    return 0;
}
