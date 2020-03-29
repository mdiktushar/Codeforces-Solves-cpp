#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> v;
    while(n--){
        int i; cin>>i;
        auto f = find(v.begin(), v.end(), i);
        if(f != v.end())
            v.erase(f);
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(auto it=v.begin(); it!=v.end(); it++)
        cout<<*it<<' ';
    cout<<endl;
    return 0;
}
