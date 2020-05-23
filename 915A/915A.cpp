#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int>v;
    while(n--)
    {
        int i;cin>>i;
        if(m%i==0)v.push_back(i);
    }
    n = *max_element(v.begin(),v.end());
    cout<<m/n<<endl;

    return 0;
}
