#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define lli long long int
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
    while(t--)
    {
        string S,s;cin>>s;
        vector<string>v;
        int t=0;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]!='0'){
                t++;
                S = s[i];
                int N = n-(2+i);
                for(int j=0; j<=N; j++)
                    S+="0";
                v.push_back(S);
            }
        }
        cout<<v.size()<<endl;
        for(auto i:v)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
