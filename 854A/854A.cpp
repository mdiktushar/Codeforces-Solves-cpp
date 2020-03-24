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

void irreducible(int a, int b){

    while(true){
        if(__gcd(a,b) == 1){
            cout<<a<<' '<<b<<endl;
            break;
        }
        a--; b++;
    }
}

//md.imrul kayes
int main()
{
    int n;cin>>n;
    if(n%2 == 0){
        n /= 2;
        int a = --n;
        int b = ++++n;
        irreducible(a,b);
    }else{
        float N = (float)n/2;
        int a = floor(N);
        int b = ceil(N);
        irreducible(a,b);
    }
    return 0;
}
