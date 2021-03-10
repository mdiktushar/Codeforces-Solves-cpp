#include<bits/stdc++.h>
using namespace std;

long long task(long long a, long long p){
    if(a<p){
        long long t1 = p/a;
        long long t2 = p%a;
        if(t2)
            t1++;
        a *= t1;
    }
    return a;

}

int main()
{
    long long t;cin>>t;
    while(t--){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        a = task(a,p);
        b = task(b,p);
        c = task(c,p);
        //cout<<a<<' '<<b<<' '<<c<<endl;
        a -= p;
        b -= p;
        c -= p;
        cout<<min(a,min(b,c))<<endl;
        //cout<<endl;
    }

    return 0;
}
