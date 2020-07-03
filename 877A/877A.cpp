#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    string name[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int sum=0;
    for(int i=0; i<5; i++)
    {
        int temp = s.find(name[i]);
        if(temp!=-1)
        {
            sum++;
            int temp1 = s.find(name[i],temp+1);
            if(temp1!=-1)
                sum++;
        }
        if(sum>1)
            break;
    }
    if(sum==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
