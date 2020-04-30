#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,l,r;
    cin>>n>>l>>r;
    lli arr1[n],arr2[n];
    lli f=1,i=0;
    while(l--){
        arr1[i++]=f;
        f*=2;
    }f=1;
    lli j=0;
    while(r--){
        arr2[j++]=f;
        f*=2;
    }

    lli sum1=0,sum2=0;
    for(lli t=0; t<i; t++)
        sum1+=arr1[t];
    for(lli t=0; t<j; t++)
        sum2+=arr2[t];

    //cout<<sum2<<endl;

    lli n1 = n;
    n1-=i;
    sum1+=n1*arr1[0];
    lli n2 = n;
    n2-=j;
    sum2+=n2*arr2[j-1];
    cout<<sum1<<' ';
    cout<<sum2<<endl;
/**
    for(int t=0; t<i; t++)
        cout<<arr1[t]<<' ';
    cout<<endl;
    for(int t=0; t<j; t++)
        cout<<arr2[t]<<' ';
    cout<<endl;

**/
    return 0;
}
