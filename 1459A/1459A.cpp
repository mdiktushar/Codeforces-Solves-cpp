#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int f1 = 0, f2 = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(s1[i]>s2[i]){
                f1++;
            }
            else if(s1[i]<s2[i]){
                f2++;
            }
            else
            {
                f1++;f2++;
            }
        }
        if(f1>f2)
            cout<<"RED"<<endl;
        else if(f1<f2)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }

    return 0;
}
