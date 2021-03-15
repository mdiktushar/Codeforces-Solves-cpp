#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n,D;cin>>n>>D;
        int a[n];
        for (int i=0;i<n;i++)
          cin>>a[i];

        while (D--){
        for (int i=1;i<n;i++)
        {
            if (a[i]>0){
                a[i]--;
                a[i-1]++;
                break;

            }

        }
    }
    cout<<a[0]<<endl;
  }
}
