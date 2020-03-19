#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

//md.imrul kayes
int main()
{
    string s;int k,n;
    cin>>n>>k>>s;
    if(n==1){
        if(k!=0)
            cout<<0<<endl;
        else
            cout<<s[0]<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            if(i==0){
                if(s[i]!='1' && k!=0){
                    cout<<1;k--;
                }else
                    cout<<s[i];
            }else{
                if(s[i]!='0' && k!=0){
                    cout<<0;k--;
                }else
                    cout<<s[i];
            }
        }
    }

    return 0;
}
