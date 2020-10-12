#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
    }
    if(v.size()%2!=0 && v[0]%2!=0 && v[v.size()-1]%2!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
