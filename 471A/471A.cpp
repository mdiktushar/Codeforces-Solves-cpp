#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    vector<int>v;
    set<int>st;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
        st.insert(i);
    }
    if(st.size()>3)
        cout<<"Alien"<<endl;
    else if(st.size()==1)
        cout<<"Elephant"<<endl;
    else if(st.size()==2)
    {
        int arr[2],j=0;
        for(int i:st)
        {
            arr[j++] = count(v.begin(),v.end(),i);
        }
        if(arr[0]==1||arr[1]==1)
            cout<<"Bear"<<endl;
        else if((arr[0]==2&&arr[1]==4)||(arr[0]==4&&arr[1]==2))
            cout<<"Elephant"<<endl;
        else cout<<"Alien"<<endl;
    }
    else
    {
        int arr[3],j=0;
        for(int i:st)
        {
            arr[j++] = count(v.begin(),v.end(),i);
        }
        if(max(arr[0],max(arr[1],arr[2]))==4)
            cout<<"Bear"<<endl;
        else cout<<"Alien"<<endl;
    }

    return 0;
}
