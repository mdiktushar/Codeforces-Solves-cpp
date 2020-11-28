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
        int n,c0, c1, h;
        string s;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        if(c0==c1)
            cout<<n*c0<<endl;
        else{
            if(c0<c1){
                int c = count(s.begin(),s.end(),'1');
                if(h+c0<=c1)
                {
                    cout<<c*h+n*c0<<endl;
                }
                else
                {
                    cout<<c*c1+(n-c)*c0<<endl;
                }

            }
            else
            {
                int c = count(s.begin(),s.end(),'0');
                if(h+c1<=c0)
                {
                    cout<<c*h+n*c1<<endl;
                }
                else
                {
                    cout<<c*c0+(n-c)*c1<<endl;
                }
            }
        }
    }
    return 0;
}
