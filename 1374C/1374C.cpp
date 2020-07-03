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
        int n;cin>>n;
        string s;cin>>s;
        int op=0;
        int co=0;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
            {
                op++;
            }
            if(s[i]==')')
            {
                co++;
                if(op<co)
                {
                    ans++;
                    co--;
                }
            }
            //cout<<s[i]<<' '<<op<<' '<<co<<' '<<ans<<endl;
        }
        cout<<ans<<endl;
    }

    return 0;
}



