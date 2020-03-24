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

int zerotest(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++)
    if(arr[i] == 0){
        sum+=1;
    }
    return sum;
}


//md.imrul kayes
int main()
{
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    int ro[r],co[c];
    zeroarr(ro,r); zeroarr(co,c);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'S'){
                ro[i]++;co[j]++;
            }
        }
    }
    int valuerow = zerotest(co,c);
    int valuecow = zerotest(ro,r);
    //cout<<valuecow<<' '<<valuerow<<endl;
    cout<<(c*valuecow)+(r*valuerow)-(valuerow*valuecow)<<endl;

    return 0;
}
