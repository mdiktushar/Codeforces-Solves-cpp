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
    int t;cin>>t;
    while(t--)
    {
        lli x,y,z;
        cin>>x>>y>>z;
        set<lli>st;
        st.insert(x);
        st.insert(y);
        st.insert(z);
        if(st.size()==3)
            cout<<"NO"<<endl;
        else if(st.size()==1)
        {
            cout<<"YES"<<endl;
            cout<<x<<' '<<y<<' '<<z<<endl;
        }
        else
        {
            if(x==y&&x>z)
            {
                cout<<"YES"<<endl;
                cout<<x<<' '<<1<<' '<<z<<endl;
            }
            else if(x==z&&x>y)
            {
                cout<<"YES"<<endl;
                cout<<1<<' '<<y<<' '<<z<<endl;
            }
            else if(y==z&&y>x)
            {
                cout<<"YES"<<endl;
                cout<<x<<' '<<y<<' '<<1<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
