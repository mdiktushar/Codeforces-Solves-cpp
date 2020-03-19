#include<bits/stdc++.h>
#include<cstdlib>
#define ll long long
#define l long

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

using namespace std;
//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        set<int> s;
        set<int>::iterator it;
        int i = n-1;
        while(n--){
            s.insert(arr[i--]);
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
