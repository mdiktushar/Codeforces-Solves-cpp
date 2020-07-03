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
    lli t;cin>>t;
    while(t--)
    {
        lli n;cin>>n;
        bool f=false;
        lli i=0,ff=0;
        while(n!=1)
        {
            i++;
            if(n%6==0)
            {
                n/=6;
                ff=0;
            }
            else
            {
                ff++;
                n*=2;
            }
            if(ff>1)
            {
                f=true;
                break;
            }

        }
        if(f==true)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}


