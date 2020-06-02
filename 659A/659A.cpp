#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    if(b==0)
        cout<<a<<endl;
    else if(b>0)
    {
        int temp = b%n;
        a+=temp;
        if(a>n)
        {
            a-=n;
        }
        cout<<a<<endl;
    }
    else
    {
        b = abs(b);
        int temp = b%n;
        //cout<<temp<<endl;
        if(temp == 0)
            cout<<a<<endl;
        else if(a>temp)
            cout<<a-temp<<endl;
        else if(a==temp)
            cout<<n<<endl;
        else
        {
            temp -= a;
            cout<<n-temp<<endl;
        }
    }
    return 0;
}
