#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int
#define ulli unsigned long long int
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

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

//cin.ignore();
//getline(cin,s);

//md.imrul kayes

int main() {
        lli _;
    cin >> _;
    while (_--) {
        int n, k;
        cin >> n >> k;

        map<int, vector<int>>mp;
        vector<lli>v;

        while(k--){
            int b,c;
            cin>>b>>c;

            mp[b].push_back(c);
        }

        for(auto i:mp)
        {
            int c = accumulate(i.second.begin(), i.second.end(), 0);
            v.push_back(c);
        }
        sort(v.begin(), v.end());
        lli sum  = 0;
        int s = v.size();
        while (n-- && s--) {
            sum += v.back();
            v.pop_back();
        }
        cout<<sum<<endl;
    }
    return 0;
}
