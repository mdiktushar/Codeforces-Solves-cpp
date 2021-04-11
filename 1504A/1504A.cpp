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

    int t;cin>>t;
    start:
    while(t--)
    {
        string s;cin>>s;
        string F = s;
        sort(F.begin(), F.end());
        int n = s.size();
        bool f = false;
        if(F[n-1]=='a'){cout<<"NO"<<endl;goto start;}

        /**
        for(int i=0; i<n; i++)
        {
            string S = s;
            S.insert(i,"a");
            string S1 = S;
            reverse(S1.begin(), S1.end());
            if(S1 != S)
            {
                cout<<"YES"<<endl;
                cout<<S<<endl;
                break;

            }
        }
        **/

        string S = s;
        S.insert(0,"a");
        string S1 = S;
        reverse(S1.begin(), S1.end());
        if(S1 != S)
        {
            cout<<"YES"<<endl;
            cout<<S<<endl;
            goto start;

        }

        S = s;
        S.insert(n-1,"a");
        S1 = S;
        reverse(S1.begin(), S1.end());
        if(S1 != S)
        {
            cout<<"YES"<<endl;
            cout<<S<<endl;
            goto start;

        }

        S = s;
        S.insert(n/2,"a");
        S1 = S;
        reverse(S1.begin(), S1.end());
        if(S1 != S)
        {
            cout<<"YES"<<endl;
            cout<<S<<endl;
            goto start;

        }
        cout<<"NO"<<endl;

    }

    return 0;
}
