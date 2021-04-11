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
    /**
    int t;cin>>t;
    Start:
    while(t--)
    {

    }
**/

    string s1, s2; cin>>s1>>s2;
	int n = s1.size(), m = s2.size();
	int arr[n];
	for(int i = 0; i<n; i++) {
		int p;cin>>p;
		arr[--p] = i;
	}

    int l = 0, r = n;
    int T = r - l;

	while(T>1){
        //cout<<l<<endl;
		int j = 0;
		int mid = (r + l) / 2;
        //cout<<r<<' '<<l<<' '<<mid<<endl;
		for(int i = 0; i<n; i++){
            if(s1[i] == s2[j] && mid <= arr[i])
                j++;
		}
		if(j == m)
            l = mid;
		else
            r = mid;
		T = r-l;
	}
	cout<<l<<endl;;

    return 0;
}

