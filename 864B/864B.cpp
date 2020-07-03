#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    set<char>st;
    int ans = 0;
    int i=0;
    while(i<n)
    {
        char a = s[i];
        i++;
        if(a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'||a=='I'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='O'||a=='P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='U'||a=='V'||a=='W'||a=='X'||a=='Y'||a=='Z')
        {
            int temp = st.size();
            ans = max(ans,temp);

            st.clear();
        }
        else
        {
            st.insert(a);
        }
        if(i==n)
        {
            int temp = st.size();
            ans = max(ans,temp);
        }
    }
    cout<<ans<<endl;

    return 0;
}
