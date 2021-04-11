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

//cin.ignore();
//getline(cin,s);

//md.imrul kayes
int main()
{
    //int t;cin>>t;
    //Start:
    //while(t--)
    {
        int n;cin>>n;
        double X,v, a[n], b[n];
        double Min = LONG_MAX;
        cin>>v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            X += a[i];
        }

        for(int i=0; i<n; i++)
            cin>>b[i];

        for(int i=0; i<n; i++)
        {
            Min = min(b[i]/a[i],Min);
        }
        //cout<<min(X*Min, v)<<endl;
        printf("%.10lf\n",min(X*Min, v));

    }

    return 0;
}
