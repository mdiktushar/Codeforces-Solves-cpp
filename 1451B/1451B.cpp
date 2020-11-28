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

bool primetest(int n)
{

    if(n!=2 && n%2==0)
        return false;
    for(int i=3; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        string s;cin>>s;
        while(q--){
            int l,r;cin>>l>>r;

            if(l==1 && r==n){
                cout<<"NO"<<endl;
                continue;
            }

            string sf;
            for(int i=l-1; i<r; i++)
                sf+=s[i];

            bool f1 = false, f2 = false;

            for(int i=0; i<l-1; i++)
            {
                if(s[i]==sf[0])
                {
                    f1=true;
                }
            }
            if(f1==true)
            {
                cout<<"YES"<<endl;
                continue;
            }

            for(int i=r; i<n; i++)
            {
                if(s[i]==sf[sf.size()-1])
                {
                    f2=true;
                }
            }
            if(f2==true)
            {
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
