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
       int n,x;
       cin>>n>>x;
       int odd=0,even=0;
       int xodd=0,xeven=0;
       int temp = x;
       while(n--)
       {
           int i;cin>>i;
           if(temp>0){
               if(i%2==0)
                xeven++;
               else xodd++;
           }
           else{
                if(i%2==0)
                    even++;
                else odd++;
           }
           temp--;
       }
       ///cout<<xodd<<' '<<xeven<<endl;
       ///cout<<odd<<' '<<even<<endl;
        if(xodd%2!=0)
            cout<<"Yes"<<endl;
        else if(xodd%2==0&&xodd==x&&even>0)
            cout<<"Yes"<<endl;
        else if(xodd>0&&xodd%2==0&&xodd<x&&(odd>0||even>0))
            cout<<"Yes"<<endl;
         else if(xodd==0&&(odd>0))
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

