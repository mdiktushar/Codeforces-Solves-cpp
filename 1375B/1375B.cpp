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

//md.imrul kayes
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        bool f1=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int a;cin>>a;
                arr[i][j]==a;

                if(f1==false)
                {
                    if(((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1))&&a>2)
                    f1=true;
                    else if(((i==0&&(j!=0||j!=m-1))||(i==n-1&&(j!=0||j!=m-1))||(j==0&&(i!=0||i!=n-1))||(j==m-1&&(i!=0||i!=n-1)))&&a>3)
                        f1=true;
                    else if(a>4)
                        f1=true;
                }
            }
        }
        if(f1==true)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {

                    if((i==0&&j==0)||(i==0&&j==m-1)||(i==n-1&&j==0)||(i==n-1&&j==m-1))
                        cout<<2<<' ';
                    else if((i==0&&(j!=0||j!=m-1))||(i==n-1&&(j!=0||j!=m-1))||(j==0&&(i!=0||i!=n-1))||(j==m-1&&(i!=0||i!=n-1)))
                        cout<<3<<' ';
                    else
                        cout<<4<<' ';
                }cout<<endl;
            }

        }

    }

    return 0;
}

