#include<bits/stdc++.h>
using namespace std;
int temp=-1;

int main()
{
    set<int>st;
    int n; cin>>n;
    int s=0;
    int S=0;
    while(n--){
        int i; cin>>i;
        if(i>temp){
            s++;
            temp = i;
        }
        else{
            S=max(S,s);
            s=1;
            temp = i;
        }
    }
    S=max(S,s);
    cout<<S<<endl;

    return 0;
}
