#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    vector<lli>v;
    while(n--)
    {
        lli i;cin>>i;
        v.push_back(i);
    }
    auto mi = min_element(v.begin(),v.end());

    lli num = *mi;
    auto f = find(mi+1, v.end(), num);
    int d = distance(mi,f);
    //cout<<d<<endl;
    if(d==1)
    {
        cout<<d<<endl;
        return 0;
    }

    auto s=f+1;
    while(true)
    {
        auto f1 = find(s,v.end(),num);
        if(f1!=v.end())
        {
            s=f1+1;
            //cout<<distance(v.begin(),s)<<endl;
            int temp = distance(f,f1);
            f = f1;
            if(temp<d)
                d=temp;
            if(d==1)
            {
                cout<<d<<endl;
                return 0;
            }
        }
        else
            break;
    }
    cout<<d<<endl;

    return 0;
}
