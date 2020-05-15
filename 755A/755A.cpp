#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int m=1;
    while(true)
    {
        bool t = false;
        int N = n*m+1;
        for(int i=2; i<=sqrt(N); i++){
            if(N%i==0)
            {
                t=true;
                break;
            }
        }
        if(t==true)
        {
            cout<<m<<endl;
            break;
        }
        m++;
    }

    return 0;
}
