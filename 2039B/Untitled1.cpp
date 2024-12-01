#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>

#define lli long long int
#define ulli unsigned long long int
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl

using namespace std;

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

void zeroarr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 0;
    }
}

lli findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

void viewarr(lli arr[], lli n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

void viewarr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}

//cin.ignore();
//getline(cin,s);

//md.imrul kayes

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();

        if (n == 1)
        {
            cout<<-1<<endl;
            continue;
        }
        if (n == 2)
        {
            if (s[0] == s[1])
            {
                cout<<s<<endl;
                continue;
            }
            else
            {
                cout<<-1<<endl;
                continue;
            }
        }
        else
        {
            bool f = true;

            for(int i=1; i<n-1; i++)
            {
                set<int> s1, s2, s3;
                s1.insert(s[i-1]);
                s1.insert(s[i]);

                s2.insert(s[i]);
                s2.insert(s[i+1]);

                s3.insert(s[i-1]);
                s3.insert(s[i]);
                s3.insert(s[i+1]);

                if (s1.size() == 1) {
                    cout<<s[i-1]<<s[i]<<endl;
                    f = false; break;
                }
                else if (s2.size() == 1) {
                    cout<<s[i]<<s[i+1]<<endl;
                    f = false; break;
                }
                else if (s3.size() == 3) {
                    cout<<s[i-1]<<s[i]<<s[i+1]<<endl;
                    f = false; break;
                }
            }
            if (f)
            {
                cout<<-1<<endl;
            }
        }

    }

    return 0;
}
