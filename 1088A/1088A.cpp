#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(n%2)
        n--;
    cout<<n<<' '<<2<<endl;

    return 0;
}
