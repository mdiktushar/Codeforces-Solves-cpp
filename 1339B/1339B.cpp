#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

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

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
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
    while(t--){
        int n;cin>>n;
        vector<int>v,v1;
        while(n--){
            int i;cin>>i;
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        while(v.size()!=0){
            if(v.size()>=2){
                v1.push_back(v.front());
                v1.push_back(v.back());
                v.pop_back();
                v.erase(v.begin());
            }
            else{
                v1.push_back(v.back());
                v.pop_back();
            }
        }
        reverse(v1.begin(), v1.end());
        for(auto i:v1)
            cout<<i<<' ';

        cout<<endl;
    }
    return 0;
}
