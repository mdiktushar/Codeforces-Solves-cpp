#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;

    while(n--){
        int i;cin>>i;
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    int sum=0;
    while(m>0){
        int i = v.back();
        m-=i;
        sum++;
        v.pop_back();
    }cout<<sum<<endl;

    return 0;
}
