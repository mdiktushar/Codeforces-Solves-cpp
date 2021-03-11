#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2,s3;
    s1 = "qwertyuiop";
    s2 = "asdfghjkl;";
    s3 = "zxcvbnm,./";

    string s;
    char c;
    cin>>c>>s;
    if(c=='L')
    {
         for(int i=0; i<=s.size(); i++)
        {
            for(int j=9; j>=0; j--)
            {
                if(s[i]==s1[j])
                {
                    s[i]=s1[j+1];
                }
                else if(s[i]==s2[j])
                {
                    s[i]=s2[j+1];
                }
                else if(s[i]==s3[j])
                {
                    s[i]=s3[j+1];
                }
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<10; j++)
            {
                if(s[i]==s1[j])
                {
                    s[i]=s1[j-1];
                }
                else if(s[i]==s2[j])
                {
                    s[i]=s2[j-1];
                }
                else if(s[i]==s3[j])
                {
                    s[i]=s3[j-1];
                }
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
