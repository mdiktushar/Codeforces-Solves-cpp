#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    long long int arr[n],sum = INT_MAX, temp=0;
    int j=0, time = 0;
    int res = 0;
    for(int i=0; i<n; i++)
    {
        int p; cin>>p;
        arr[i]=p;time++;
        if(time<=k)
            temp+=p;
        if(time==k)
        {
            time--;
            int tt = sum;
            sum = min(sum,temp);
            if(tt!=sum)
            {
                res = j+1;
            }
            temp-=arr[j++];
        }
    }
    cout<<res<<endl;
    return 0;
}
