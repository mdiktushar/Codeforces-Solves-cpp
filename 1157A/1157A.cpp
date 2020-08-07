#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    set<lli>st;

    while (st.find(n) == st.end()){
        st.insert(n);

        n++;
        while (n % 10 == 0){
            n /= 10;
        }
    }

    cout<<st.size()<<endl;
    return 0;
}
