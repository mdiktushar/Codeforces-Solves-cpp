#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 0};
    auto p = find(v.begin(), v.end(), n);
    p++;
    if(m == *p)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
