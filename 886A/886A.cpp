#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int arr[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0)
        cout<<"NO"<<endl;
    else
    {
        sum/=2;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)continue;
                for(int k=0; k<n; k++)
                {
                    if(k==i||k==j)
                        continue;
                    if(arr[i]+arr[j]+arr[k]==sum)
                    {
                        //cout<<i<<' '<<j<<' '<<k<<endl;
                        //cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<"NO"<<endl;
    }

    return 0;
}
