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
    vector<int> v;
    while(n--){
        int i;cin>>i;
        v.push_back(i);
    }
    n = v.size()-1;
    int i = 1;
    while(n--){
        if(i%2==1){
            auto it = max_element(v.begin(), v.end());
            v.erase(it);
            i++;
        }
        else{
            auto it = min_element(v.begin(), v.end());
            v.erase(it);
            i++;
        }
    }
    cout<<v.front()<<endl;

    return 0;
}
