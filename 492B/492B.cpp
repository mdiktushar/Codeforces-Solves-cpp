#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    n=v.size();

    double res = 0;
    for(int i=0; i<n-1; i++)
    {
        double tem = (v[i+1]-v[i]);
        //cout<<tem<<endl;
        res = max(res,tem);
    }
    res/=2;

    double t1=0,t2=0;
    if(v.front()!=0)
        t1=v.front();
    if(v.back()!=m)
        t2=m-v.back();
    double mx = max(res,max(t1,t2));
    cout<<fixed<<setprecision(10)<<mx<<endl;

    return 0;
}
