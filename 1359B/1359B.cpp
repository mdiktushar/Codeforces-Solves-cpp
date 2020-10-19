#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        string s[n];
        for(int i=0; i<n; i++)
            cin>>s[i];

        int d=0, si=0;

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                if(j<m-1)
                {
                    if(s[i][j]=='.'&& s[i][j+1]=='.')
                    {
                        d++;j++;
                    }
                    else if(s[i][j]=='.' && s[i][j+1]!='.')
                        si++;
                }
                else
                {
                    if(s[i][j]=='.')
                        si++;
                }
            }
        }
        if(2*x>=y)
        {
            cout<<si*x+d*y<<endl;
        }
        else
        {
            cout<<((d*2)+si)*x<<endl;
        }

    }

    return 0;
}
