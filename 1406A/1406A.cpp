#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>a,b;
        while(n--)
        {
            pair<set<int>::iterator,bool>p;
            int i;cin>>i;
            p = a.insert(i);
            if(p.second == false)
                b.insert(i);
        }

        int flag = 0;
        for(auto i:a)
        {
            if(flag != i)
                break;
            flag++;
        }
        int sum = flag;
        flag = 0;
        for(auto i:b)
        {
            if(flag != i)
                break;
            flag++;
        }
        sum+=flag;
        cout<<sum<<endl;
    }

    return 0;
}
