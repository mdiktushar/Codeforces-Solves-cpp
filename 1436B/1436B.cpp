#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int I=0, J=n-1;
        int arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    arr[i][j]=1;
                else if(i==I && j==J)
                {
                    arr[i][j]=1;
                    I++; J--;
                }
                else arr[i][j]=0;
                if(n%2!=0)
                {
                    if(i==j && i==n/2 && j == n/2 )
                    {
                        I++; J--;
                    }
                }

            }
        }

        if(n%2!=0)
        {

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if((i==(n/2)-1)&&(j==n/2))
                        arr[i][j]=1;
                    else if((i==n/2)&&(j==(n/2)-1))
                        arr[i][j]=1;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}
