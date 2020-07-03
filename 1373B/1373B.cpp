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
        string s;cin>>s;
        int t=0;
        while(true)
        {
            int f1 = s.find("01");
            int f2 = s.find("10");
            if(s.size()==1)
            {
               cout<<"NET"<<endl;
               break;
            }
            if((f1==-1 && f2==-1)||s.size()==0)
            {
                if(t%2==0)
                    cout<<"NET"<<endl;
                else
                    cout<<"DA"<<endl;
                break;
            }
            t++;
            if(f1==-1)f1=INT_MAX;
            if(f2==-1)f2=INT_MAX;
            f1=min(f1,f2);

            int si = s.size();

            if(f1==si-2)
            {
                s.clear();
            }
            else
            {
                s.erase(s.begin()+f1);
                s.erase(s.begin()+f1);
            }
            //cout<<s<<endl;
        }
    }
    return 0;
}

