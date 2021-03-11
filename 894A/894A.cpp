#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int c = 0;
    int n = s.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
                    c++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}
