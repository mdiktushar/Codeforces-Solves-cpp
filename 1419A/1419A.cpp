#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        if(n==1)
        {
            int num = stoi(s);
            if(num%2==0)
                cout<<2<<endl;
            else
                cout<<1<<endl;
            continue;
        }
        int even=0,odd=0;
        for(int i=0; i<n; i+=2)
        {
            if((s[i]-48)%2==0)
                even++;
        }
        for(int i=1; i<n; i+=2)
        {
            if((s[i]-48)%2!=0)
                odd++;
        }
        //cout<<even<<' '<<odd<<endl;

        int temp=0;

        if(n%2==0)
        {
            temp = n/2;
            temp--;
            temp-=odd;
            if(temp>=0)
                cout<<2<<endl;
            else cout<<1<<endl;
        }
        else
        {
            temp = n/2;
            temp-=even;
            if(temp>=0)
                cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

    return 0;
}
