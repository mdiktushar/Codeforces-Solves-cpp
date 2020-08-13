#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n1 = s.size();
        set<char>st;
        for(int i=0; i<n1; i++)
            st.insert(s[i]);
        if(s.size()==st.size())
        {
            string check = "abcdefghijklmnopqrstuvwxyz";
            sort(s.begin(),s.end());
            int f = -2;
            f = check.find(s);
            if(f>-1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }

    return 0;
}
