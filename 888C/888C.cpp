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

    /**
    int t;cin>>t;

    while(t--)
    {

    }

    */

    string s;cin>>s;
    int n = s.size();
    string S = s;
    sort(S.begin(), S.end());
    if(S[0]==S[n-1])
    {
        cout<<1<<endl;
        return 0;
    }
    set<char>st;
    for(int i=0; i<n; i++)
        st.insert(s[i]);

    int MIN = INT_MAX;
    for(auto C : st)
    {
        int M = INT_MIN;
        int K = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]== C)
            {
                M = max(M,K);
                K = 0;
            }
            else
            {
                K++;
                M = max(M,K);
            }
        }
        MIN = min(M+1,MIN);
    }
    cout<<MIN<<endl;


    return 0;
}

