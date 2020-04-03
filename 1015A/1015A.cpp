#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=1; i<=m; i++)
        v.push_back(i);
    while(n--){
        int L,U;
        cin>>L>>U;
        for(int i=L; i<=U; i++){
            auto F = find(v.begin(), v.end(), i);
            if(F!=v.end())
                v.erase(F);
        }
    }
    if(v.size()==0)
        cout<<0<<endl;
    else{
        cout<<v.size()<<endl;
        for(auto it=v.begin(); it!=v.end(); it++)
        cout<<*it<<' ';
    }

    return 0;
}
