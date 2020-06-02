#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

int main()
{
    int n;cin>>n;
    if(n==4)
        cout<<1<<endl;
    else if(n==7)
        cout<<2<<endl;
    else
    {
        string st = to_string(n);

        for(int i=0; i<st.size(); i++)
        {
            if(st[i]=='4')
                st[i]='0';
            else st[i]='1';
        }
        int N = st.size();
        int num = 0;
        for(int i=1; i<N; i++)
            num += (int)pow(2,i);

        int n = (int)pow(2,st.size());
        N = stoi(st);
        N = binaryToDecimal(N);
        cout<<num+N+1<<endl;
    }

    return 0;
}
