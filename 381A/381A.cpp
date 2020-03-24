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
    int n;cin>>n;
    vector<ll> v;
    while(n--){
        int i;cin>>i;
        v.push_back(i);
    }
    int i = 0;
    int sum1 = 0, sum2 = 0;
    while(v.size() != 0){
        auto it1 = v.begin();
        auto it2 = v.end()-1;

        int m = max(*it1,*it2);

        if(m==*it1)
            v.erase(it1);
        else
            v.erase(it2);
        if(i%2 == 0)
            sum1+=m;
        else
            sum2+=m;
        i--;
    }
    cout<<sum1<<' '<<sum2<<endl;

    return 0;
}
