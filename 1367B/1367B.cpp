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
        int n;cin>>n;
        int arr[n];
        int on=0,ze=0,res=0;
        for(int i=0; i<n; i++)
        {
            int num;cin>>num;
            num%=2;
            if(num==0)ze++;
            else on++;
            arr[i]=num;
        }
        if(n%2!=0&&ze<on)
            cout<<-1<<endl;
        else if(n%2!=0&&ze>on+1)
            cout<<-1<<endl;
        else if(n%2==0&&ze!=on)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<n; i++)
            {
                //cout<<i%2<<' '<<arr[i]%2<<endl;
                if(i%2!=arr[i]%2)
                    res++;
            }
            cout<<res/2<<endl;
        }
    }
    return 0;
}
