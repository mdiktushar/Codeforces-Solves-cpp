#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{

    int n,m;cin>>n>>m;
    vector<lli>a,room,b;
    lli temp=0;

    while(n--){
            lli i;cin>>i;
            a.push_back(i);
            temp+=i;
            room.push_back(temp);
    }

    while(m--){
        lli i;cin>>i;
        b.push_back(i);
    }
    /**
    for(int i=0; i<room.size(); i++)
        cout<<room[i]<<' ';
    cout<<endl;
    **/
    for(int i=0; i<b.size(); i++){
        auto rm = lower_bound(room.begin(),room.end(),b[i]);
        int t = distance(room.begin(),rm);
        if(t==0)
        {
            cout<<1<<' '<<b[i]<<endl;
        }
        else
        {
            lli temp = b[i]-room[t-1];
            cout<<t+1<<' '<<temp<<endl;
        }
    }

    return 0;
}
