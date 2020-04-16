#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int f=0;
    vector<int>v;
    for(int i=0; i<n; i++){
        if(s[i]=='B')f++;
        if(s[i]=='W' && f>0){
            v.push_back(f);
            f=0;
        }
        if(i==n-1 && f>0){
            v.push_back(f);
            f=0;
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v)
        cout<<i<<' ';

    return 0;
}
