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
    lli t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;cin>>s;

        set<char> st;

        for (int i=0; i<n; i++)
        {
            st.insert(s[i]);
        }
        int mx = INT_MIN;
        char c1 = '-';
        int mi = INT_MAX;
        char c2 = '-';

        for (auto i : st)
        {
            int c = count(s.begin(), s.end(), i);
            if (c > mx) {
                c1 = i;
                mx = c;
            }
            if (c < mi)
            {
                c2 = i;
                mi = c;
            }
        }

        if (st.size() > 1)
        {
            if (c1 == c2) {
                for (auto i : st)
                {
                    if (c1 != i)
                    {
                        c1 = i;
                    }
                }
            }
        }

        int f = s.find(c2);
        s[f] = c1;
        cout<<s<<endl;
    }

    return 0;
}
