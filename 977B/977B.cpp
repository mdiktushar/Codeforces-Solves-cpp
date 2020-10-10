#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int flag = 0;
    string res;
    for(int i=0; i<n-1; i++)
    {
        string s1;
        for(int j=i; j<=i+1; j++)
            s1+=s[j];

        int count=0;
        for(int k=0; k<n-1; k++)
        {
            if(s[k]==s1[0] && s[k+1]==s1[1])
                count++;
        }
        if(count>flag)
        {
            flag=count;
            res=s1;
        }
    }
    cout<<res<<endl;

    return 0;
}
