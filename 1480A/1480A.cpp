#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string r,s;cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(i%2==0)
            {
                if(s[i]>'a')
                    r += 'a';
                else
                    r += 'b';
            }
            else
            {
                if(s[i]<'z')
                    r += 'z';
                else
                    r += 'y';

            }
        }
        cout<<r<<endl;
    }

    return 0;
}
