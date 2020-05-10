#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int i=0;
    while(n--){
        int nn;cin>>nn;
        string s = to_string(nn);

        int four = count(s.begin(), s.end(),'4');
        int seven = count(s.begin(), s.end(),'7');
        int sum = four+seven;
        if(sum<=k)
            i++;
    }
    cout<<i<<endl;

    return 0;
}
