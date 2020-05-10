#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v1,v2;
    while(n--){
        int i; cin>>i;
        if(i%2==0)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    lli sum = 0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1.size()==v2.size())
    {
        sum=0;
    }
    else if(v1.size()>v2.size()){
        n = v1.size()-v2.size();
        n--;
        if(n!=0)
            for(int i=0; i<n; i++)
                sum+=v1[i];
    }
    else
    {
        n = v2.size()-v1.size();
        n--;
        if(n!=0)
            for(int i=0; i<n; i++)
                sum+=v2[i];
    }
    cout<<sum<<endl;
    return 0;
}
