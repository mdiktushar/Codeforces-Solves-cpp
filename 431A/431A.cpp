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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int a1=0,b1=0,c1=0,d1=0;
    string s;cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] == '1')
            a1++;
        else if(s[i] == '2')
            b1++;
        else if(s[i] == '3')
            c1++;
        else
            d1++;
    }

    cout<<a*a1+b*b1+c*c1+d*d1<<endl;

    return 0;
}
