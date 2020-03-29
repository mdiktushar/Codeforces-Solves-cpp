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

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

int findSum(int A[], int N) {
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
    string s; cin>>s;
    int N = s.size();
    int n = 0, p = 0, sum = 0;
    for(int i=0; i<N; i++){
        if(s[i]=='a')
            n = 0;
        else if(s[i]=='b')
            n = 1;
        else if(s[i]=='c')
            n = 2;
        else if(s[i]=='d')
            n = 3;
        else if(s[i]=='e')
            n = 4;
        else if(s[i]=='f')
            n = 5;
        else if(s[i]=='g')
            n = 6;
        else if(s[i]=='h')
            n = 7;
        else if(s[i]=='i')
            n = 8;
        else if(s[i]=='j')
            n = 9;
        else if(s[i]=='k')
            n = 10;
        else if(s[i]=='l')
            n = 11;
        else if(s[i]=='m')
            n = 12;
        else if(s[i]=='n')
            n = 13;
        else if(s[i]=='o')
            n = 14;
        else if(s[i]=='p')
            n = 15;
        else if(s[i]=='q')
            n = 16;
        else if(s[i]=='r')
            n = 17;
        else if(s[i]=='s')
            n = 18;
        else if(s[i]=='t')
            n = 19;
        else if(s[i]=='u')
            n = 20;
        else if(s[i]=='v')
            n = 21;
        else if(s[i]=='w')
            n = 22;
        else if(s[i]=='x')
            n = 23;
        else if(s[i]=='y')
            n = 24;
        else
            n = 25;

        int temp = abs(p-n);
        int re = 26-temp;
        p = n;
        sum += min(temp,re);
    }cout<<sum<<endl;


    return 0;
}
