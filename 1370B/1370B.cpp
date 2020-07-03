#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int N = n*2;
        vector<int>odd,eve,r;
        int j=1;
        while(N--)
        {
            int i;cin>>i;
            if(i%2!=0)
                odd.push_back(j++);
            else
                eve.push_back(j++);
        }
        while(--n)
        {
            if(odd.size()>=2)
            {
                cout<<odd.front()<<' '<<odd.back()<<endl;
                odd.erase(odd.begin());
                odd.pop_back();
            }
            else if(eve.size()>=2)
            {
                cout<<eve.front()<<' '<<eve.back()<<endl;
                eve.erase(eve.begin());
                eve.pop_back();
            }
        }
    }

    return 0;
}
