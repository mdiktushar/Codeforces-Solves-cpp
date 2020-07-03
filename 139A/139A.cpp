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
    lli n; cin>>n;
    lli sum = 0;
    int arr[7];
    int d = 1;
    bool b = false;
    for(int i=0; i<7; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(sum>=n)
        {
            b = true;
            continue;
        }

        if(i==6)continue;
        d++;
    }
    if(b==true)
        cout<<d<<endl;
    else
    {
        lli temp = sum;
        int j = 1;
        while(true)
        {
            temp*=j++;
            if(temp>=n)
                break;
            temp = sum;
        }
        sum = temp;
        reverse(arr,arr+7);
        for(int i=0; i<7; i++)
        {
            sum -= arr[i];
            //cout<<sum<<endl;
            if(sum<n)
            {
                cout<<d<<endl;
                return 0;
            }
            d--;
        }

    }

    return 0;
}

