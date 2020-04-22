#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double sum=0.0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int a;cin>>a;
        sum+=a;
    }
    cout<<fixed<<setprecision(12)<<sum/n<<endl;
}
