#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v1,v2,v3;
    while(n--)
    {
        int i;cin>>i;
        if(i<0)
            v1.push_back(i);
        else if(i>0)
            v2.push_back(i);
        else
            v3.push_back(i);
    }
    if(v2.size()==0)
        for(int i=0; i<2; i++){
            v2.push_back(v1.back());
            v1.pop_back();
    }
    if(v1.size()%2==0){
        v3.push_back(v1.back());
        v1.pop_back();
    }
    cout<<v1.size()<<' ';
    for(auto i:v1)
        cout<<i<<' ';
    cout<<endl;
    cout<<v2.size()<<' ';
    for(auto i:v2)
        cout<<i<<' ';
    cout<<endl;
    cout<<v3.size()<<' ';
    for(auto i:v3)
    cout<<i<<' ';
    cout<<endl;

    return 0;
}
