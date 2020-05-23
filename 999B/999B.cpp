#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int t = n;
    vector<int>v;
    while(t>0)
    {
        if(n%t==0)
        {
            int temp = n-t;
            v.push_back(temp);
        }
        t--;
    }
    reverse(v.begin(),v.end());
    while(v.size()!=0)
    {
        reverse(s.begin(),s.end()-v.front());
        v.erase(v.begin());
    }
    cout<<s<<endl;

    return 0;
}
