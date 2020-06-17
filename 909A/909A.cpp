#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
    int i=0,j=0;
    s3+=s1[i++];
    while(true)
    {
        if(i==s1.size()){s3+=s2[j];break;}
        if(s1[i]<s2[j])
            s3+=s1[i++];
        else
            {s3+=s2[j];break;}

    }cout<<s3<<endl;
}
