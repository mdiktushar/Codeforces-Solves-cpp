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
        vector<int> v;
        vector<pair<int, int>> vp;
        set<int>st;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.push_back(a);
            st.insert(a);
        }
        int N = n/2;
        if (n%2)
        {
            N++;
        }

        for(auto i : st)
        {
            int c = count(v.begin(), v.end(), i);
            vp.push_back(make_pair(i, c));
        }

        sort(vp.begin(), vp.end(), [](const pair<int, int> & a, const  pair<int, int> & b) {
         return a.second < b.second;
        });
        int r = 0;
        int one = 1;
        int more = 0;
        for(auto i : vp)
        {
            if(i.second == 1){
                one++;
            }
            else {
                more++;
            }

        }
        cout<<2*(one / 2)+more<<endl;

    }

    return 0;
}
