#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[1+n];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    sort(arr+1, arr+n+1);
    long long int sum = 0;
    for (int i = 1; i <= n / 2; i++){
		sum +=  (arr[i] + arr[n - i + 1]) * (arr[i] + arr[n - i + 1]);
	}
    cout<<sum<<endl;

    return 0;
}
