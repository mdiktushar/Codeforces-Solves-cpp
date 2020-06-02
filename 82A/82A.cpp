#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    lli temp =0, temp1=0;
    lli i=0;
    for(lli I=1; ;I*=2)
    {
        i=I;
        temp += I*5;
        if(temp>=n)
            break;
        temp1 = temp;
    }
    //cout<<i<<' '<<temp1<<endl;
    lli f=-1;
    for(lli j=temp1; j<=temp; j+=i)
    {
        f++;
        if(j>=n)
            break;
    }
    if(f==1)
        cout<<"Sheldon"<<endl;
    else if(f==2)
        cout<<"Leonard"<<endl;
    else if(f==3)
        cout<<"Penny"<<endl;
    else if(f==4)
        cout<<"Rajesh"<<endl;
    else if(f==5)
        cout<<"Howard"<<endl;
    return 0;
}
