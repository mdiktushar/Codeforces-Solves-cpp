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
    while(t--)
    {
        int n;cin>>n;
        string s[n];
        for(int i=0; i<n; i++)
            cin>>s[i];

        int a,b;
        int c,d;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j] == '*' && !f)
                {
                    a = i; b = j;
                    f = true;
                }
                else if(s[i][j] == '*' && f)
                {
                    c = i; d = j;
                    break;
                }
            }
        }
        //cout<<a<<' '<<b<<endl;
        //cout<<c<<' '<<d<<endl;

        if(a != c && b != d)
        {
            s[a][d] = '*';
            s[c][b] = '*';
        }
        else if(a == c)
        {
            if(a+1 <n)
            {
                s[a+1][b] = '*';
                s[c+1][d] = '*';
            }
            else
            {
                s[a-1][b] = '*';
                s[c-1][d] = '*';
            }
        }
        else
        {
            if(b == d)
            {
                if(b+1<n)
                {
                    s[a][b+1] = '*';
                    s[c][d+1] = '*';
                }
                else
                {
                    s[a][b-1] = '*';
                    s[c][d-1] = '*';
                }
            }
        }

        for(int i=0; i<n; i++)
            cout<<s[i]<<endl;

    }
    return 0;
}
