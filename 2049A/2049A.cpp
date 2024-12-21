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

int main()
{
    lli _;
    cin>>_;
    while(_--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i = 0; i<n; i++) {
            int a;cin>>a;
            v.push_back(a);
        }

        while (n--)
        {
            if(v.front() == 0)
                v.erase(v.begin());
            else break;
        }

        n = v.size();
        while(n--)
        {
            if (v.back() == 0)
                v.pop_back();
            else break;
        }


        if (v.size() == 0)
        {
            cout<<0<<endl;
            continue;
        }
        int zero = count(v.begin(), v.end(), 0);
        if (zero)
            cout<<2<<endl;
        else cout<<1<<endl;

    }

    return 0;
}
