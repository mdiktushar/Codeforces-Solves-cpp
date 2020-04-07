#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin>>n;
    vector<int>v1,v2;
    while(n--){
        int i,j;cin>>i>>j;
        v1.push_back(i);
        v2.push_back(j);
    }
    n = v1.size();
    int sum=0;
    for(auto i=0; i<n; i++){
        int a = count(v1.begin(), v1.end(), v2[i]);
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;
}
