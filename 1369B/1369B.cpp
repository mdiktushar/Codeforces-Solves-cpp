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
        string s,r,t,t1;cin>>s;
        int f = s.find('0');
        t=s;
        sort(t.begin(),t.end());
        if(t==s||t[0]==t[n-1])
        {
            cout<<s<<endl;
            continue;
        }
        if(s[0]=='1'&&s[n-1]=='0')
        {
            cout<<0<<endl;
            continue;
        }

        int fone = s.find('1');
        for(int i=0; i<fone; i++)
            r+='0';
        ///cout<<r<<endl;
        t=s;
        reverse(t.begin(),t.end());
        fone = t.find('0');

        int i;
        for(i=0; i<fone; i++)
        {
            t1+=t[i];
        }
        ///cout<<t1<<endl;
        ///cout<<i<<endl;
        for(; i<n; i++)
        {
            if(t[i]=='1')
            {
                t1+='0';
                break;
            }
        }

        //cout<<t1<<endl;
        ///cout<<t1<<endl;
        /**
        for(; i<n;i++)
        {
            if(t[i]=='1')
                break;
            t1+=t[i];
        }
        **/
        reverse(t1.begin(),t1.end());
        r+=t1;
        cout<<r<<endl;
    }
    return 0;
}

