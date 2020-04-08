#include<bits/stdc++.h>
using namespace std;
int temp=0;
int main()
{

    int n;cin>>n;
    int sum = 0;
    temp = n/100;
    sum+=temp;
    n-=temp*100;

    temp = n/20;
    sum+=temp;
    n-=temp*20;

    temp = n/10;
    sum+=temp;
    n-=temp*10;

    temp = n/5;
    sum+=temp;
    n-=temp*5;

    temp = n/1;
    sum+=temp;
    n-=temp*1;
    cout<<sum<<endl;
    return 0;
}
