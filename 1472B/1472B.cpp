#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

lli findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(lli arr[], lli n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}


//md.imrul kayes
int main()
{

    int t;cin>>t;
    test:
    while(t--){
        int n;cin>>n;
        vector<int>v1,v2;
        for(int i=0; i<n; i++)
        {
            int temp;cin>>temp;
            if(temp == 2){
                v2.push_back(temp);
            }
            else{
                v1.push_back(temp);
            }
        }
        if(v1.size()%2 !=0 )
        {
            cout<<"NO"<<endl;
            goto test;
        }
        if(v1.size()%2==0 && v2.size()%2==0)
            cout<<"YES"<<endl;
        else if(v1.size() == v2.size()*2)
            cout<<"YES"<<endl;
        else if(v1.size()!=0 && (v1.size()+(v2.size()*2))%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
