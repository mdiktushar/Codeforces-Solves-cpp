#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    while(n--){
        int i;cin>>i;
        v.push_back(i);
    }
    n = 0;
    while(true){
        auto F = v.begin();
        auto E = v.end()-1;
        if(*F<=k){
            v.erase(F);
            ///cout<<*(v.begin())<<endl;
            n++;
        }
        if(v.size()==0)
            break;
        if(*E<=k){
            v.pop_back();
            ///cout<<v.back()<<endl;
            n++;
        }
        if(v.size()==0)
            break;
        if(*F>k && *E>k)
            break;
    }cout<<n<<endl;

    return 0;
}
