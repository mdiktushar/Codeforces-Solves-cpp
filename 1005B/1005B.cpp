#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int n1 = s1.size();
    int n2 = s2.size();
    //cout<<n1<<' '<<n2<<endl;
    n1--; n2--;
    while(true){
        if(n1==-1 || n2==-1)
            break;

        //cout<<s1[n1]<<' '<<s2[n2]<<endl;
        if(s1[n1] != s2[n2])
            break;
        n1--; n2--;
    }
    n1++;n2++;
    cout<<n1+n2<<endl;

    return 0;
}
