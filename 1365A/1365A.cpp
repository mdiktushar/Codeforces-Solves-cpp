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
        int r,c;
        cin>>r>>c;
        int box[r][c];
        bool a[r],b[c];
        int sum=0;

        for(int i=0; i<r; i++)
            a[i]=false;
        for(int i=0; i<c; i++)
            b[i]=false;


        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int p;cin>>p;
                box[i][j]=p;
                if(p!=0)
                {
                    a[i]=true;b[j]=true;
                }
            }
        }

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int p = box[i][j];
                if(p==0&&a[i]==false&&b[j]==false)
                {
                    sum++;
                    a[i]=true;b[j]=true;
                }
            }
        }
        if(sum%2==0)
            cout<<"Vivek"<<endl;

        else cout<<"Ashish"<<endl;
    }
    return 0;
}

