#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    if(s.size()<7)
        cout<<"no"<<endl;
    else
    {
        int f=s.find('1');
        if(f==-1)
        {
            cout<<"no"<<endl;
            return 0;
        }
        int c = count(s.begin()+f,s.end(),'0');
        if(c>=6)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
