#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int temp = n-a;
    if(temp<=b)
        cout<<temp<<endl;
    else cout<<b+1<<endl;
}
