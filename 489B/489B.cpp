#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<int>by,gi;
    cin>>n;
    while(n--){
        int i;cin>>i;
        by.push_back(i);
    }
    cin>>m;
    while(m--){
        int i;cin>>i;
        gi.push_back(i);
    }
    sort(by.begin(),by.end());
    sort(gi.begin(),gi.end());

    int r=0;
    for(int i=0; i<by.size(); i++)
    {
        for(int j=0; j<gi.size(); j++)
        {
            if(abs(by[i]-gi[j])<=1)
            {
                //cout<<by[i]<<' '<<gi[j]<<endl;
                gi[j]=10000;
                r++;
                break;
            }
        }
    }
    cout<<r<<endl;

    return 0;
}
