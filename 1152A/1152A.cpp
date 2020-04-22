#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int codd=0,cev=0,kodd=0,kev=0;
    while(n--){
        int i;cin>>i;
        if(i%2==0)
            cev++;
        else codd++;
    }
    while(m--){
        int i;cin>>i;
        if(i%2==0)
            kev++;
        else kodd++;
    }
    cout<<min(cev,kodd)+min(kev,codd)<<endl;
    return 0;
}
