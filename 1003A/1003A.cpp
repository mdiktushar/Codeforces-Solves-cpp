#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v;
    while(n--){
        int i; cin>>i;
        v.push_back(i);
    }
    int M = *max_element(v.begin(), v.end());
    int Res = INT_MIN;
    while(M!=0){
        int temp = count(v.begin(), v.end(), M);
        Res = max(Res,temp);
        M--;
    }
    cout<<Res<<endl;

    return 0;
}
