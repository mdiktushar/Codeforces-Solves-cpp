#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int p;cin>>p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    int a = v[n-1]-v[1];
    int b = v[n-2]-v[0];
    cout<<min(a,b)<<endl;

    return 0;
}
