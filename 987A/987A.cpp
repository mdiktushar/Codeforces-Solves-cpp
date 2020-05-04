#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v ={"Power", "Time", "Space",
                    "Soul", "Reality", "Mind"};
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s=="purple")
            v.erase(find(v.begin(), v.end(),"Power"));
        else if(s=="green")
            v.erase(find(v.begin(), v.end(),"Time"));
        else if(s=="blue")
            v.erase(find(v.begin(), v.end(),"Space"));
        else if(s=="orange")
            v.erase(find(v.begin(), v.end(),"Soul"));
        else if(s=="red")
            v.erase(find(v.begin(), v.end(),"Reality"));
        else
            v.erase(find(v.begin(), v.end(),"Mind"));
    }
    cout<<v.size()<<endl;
    for(auto i:v)
        cout<<i<<endl;

    return 0;
}
