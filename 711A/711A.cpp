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
    int n; cin>>n;
    vector<string> v;
    int i=-1;
    while(n--){
        string s;cin>>s;
        if(i==-1 && s.find("OO")!= -1){
            i = s.find("OO");
            s[i] = '+'; s[i+1] = '+';
        }
        v.push_back(s);

    }
    if(i == -1)
        cout<<"NO"<<endl;
    else {cout<<"YES"<<endl;
        for(auto it=v.begin(); it!=v.end(); it++)
            cout<<*it<<endl;
    }
    return 0;
}
