#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    if(n>26)
        cout<<-1<<endl;
    else
    {
        int sum=0;
        for(char i='a'; i<='z'; i++)
        {
            int c = count(s.begin(),s.end(),i);
            if(c>0)
                sum+=c-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
