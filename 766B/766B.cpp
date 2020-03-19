#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int f=0;
    for(int i=0; i<n-2; i++){
        int a,b,c;
        a=arr[i];
        b=arr[i+1];
        c=arr[i+2];
        if (a+b > c && b+c > a && c+a > b)
            {
                f = 1;
                cout << "YES" << endl;
                break;
            }
    }
    if(f==0)cout<<"NO"<<endl;

    return 0;
}
