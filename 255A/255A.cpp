#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ch=0,bi=0,ba=0;
    for(int i=0; i<n; i++){
        ch+=arr[i++];
        if(i>=n)break;
        bi+=arr[i++];
        if(i>=n)break;
        ba+=arr[i];
    }
    int M = max(ch,max(bi,ba));
    if(M==ch)cout<<"chest"<<endl;
    else if(M==bi)cout<<"biceps"<<endl;
    else cout<<"back"<<endl;

    return 0;
}
