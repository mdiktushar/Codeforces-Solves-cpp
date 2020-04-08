#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1; i<11; i++){
        int F=k*i;
        int f=(k*i)-r;
        if(F%10==0 || f%10==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
