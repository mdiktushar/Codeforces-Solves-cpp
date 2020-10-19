#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>st;
        vector<int>v;
        int arr[n+1];
        for(int i=0; i<n+1; i++)
            arr[i]=1;
        while(n--)
        {
            int i;cin>>i;
            v.push_back(i);
            pair<set<int>::iterator,bool>p;
            p = st.insert(i);
            if(p.second==false)
            {
                arr[i]++;
            }
        }

        n = v.size();
        int mx = *max_element(arr, arr+(n+1));

        n = st.size();
        n--;
        if(n+2<= mx)
            cout<<n+1<<endl;
        else
            cout<<min(mx,n)<<endl;
    }

    return 0;
}
