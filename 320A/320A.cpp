#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n = s.size();
    if(s[0]=='4'){
        cout<<"NO"<<endl;
        return 0;
    }
    int F = s.find("1444");
    if(F>-1){
        cout<<"NO"<<endl;
        return 0;
    }
    bool f = false;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            f = true;
        }
        else if(s[i]=='2'){
            f = true;
        }
        else if(s[i]=='3'){
            f = true;
        }
        else if(s[i]=='5'){
            f = true;
        }
        else if(s[i]=='6'){
            f = true;
        }
        else if(s[i]=='7'){
            f = true;
        }
        else if(s[i]=='8'){
            f = true;
        }
        else if(s[i]=='9'){
            f = true;
        }
    }
    if(f==true)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
