#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,sr,st;;
    int t1=0,t2=0;
    cin>>s;
    int n=-1;
    while(s.size()!=0)
    {
        n = s.find("WUB");
        if(n==0)
            s.erase(0,3);
        else
        {
            st=s.substr(0,n);
            st+=' ';
            sr+=st;
            s.erase(0,n);
            //cout<<sr<<endl;
        }
        //cout<<s<<endl;
    }
    cout<<sr<<endl;

    return 0;
}
