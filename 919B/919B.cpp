#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    if(n==1)
        cout<<19<<endl;
    else
    {   int f = 1;
        for(int i=28; ;i++)
        {
            string s = to_string(i);
            int sum = 0;
            for(int j=0; j<s.size(); j++)
            {
                int t = s[j]-'0';
                sum+=t;
            }
            if(sum==10)
                f++;
            if(f==n)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }

    return 0;
}
