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
        lli a,b,c,d;
        cin>>a>>b>>c>>d;
        a -= b;
        if(a<=0)
        {
            cout<<b<<endl;
            continue;
        }
        if(c<=d)
        {
            cout<<-1<<endl;
            continue;
        }
        lli temp = c-d;
        lli temp1 = a/temp;
        if(a%temp!=0)temp1++;
        cout<<b+temp1*c<<endl;
    }
    return 0;
}
