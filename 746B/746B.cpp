#include<bits/stdc++.h>
#include<cstdlib>
#define ll long long
#define l long

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

using namespace std;
//md.imrul kayes
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    list<char> li;
    list<char>::iterator it;
    int i=0;
    while(n!=0){
        if(n%2==0){
            li.push_front(s[i++]);
        }else{
            li.push_back(s[i++]);
        }
        n--;
    }
    for(it = li.begin(); it!=li.end(); it++){
        cout<<*it;
    }cout<<endl;
    return 0;
}
