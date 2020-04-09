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
    int Max = *max_element(v.begin(), v.end());
    int sum=0;
    for(int i=0; i<v.size(); i++){
        int j = Max-v[i];
        sum+=j;
    }
    cout<<sum<<endl;

    return 0;
}
