#include<bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;

    for(int t=0; t<T; t++){
        int bre,bee,che;
        int hb,cb;
        cin>>bre>>bee>>che>>hb>>cb;
        if(hb>cb){
            int i=0,j=0;
            for(i=0; bee>0; bee--){
                if(bre>1){
                    i++;
                    bre-=2;
                }
                else
                    break;
            }
            for(j=0; che>0; che--){
                if(bre>1){
                    j++; bre-=2;
                }
                else break;
            }
            i = i*hb;
            j = j*cb;
            cout<<i+j<<endl;
        }
        else{
            int i=0,j=0;
            for(j=0; che>0; che--){
                if(bre>1){
                    j++; bre-=2;
                }
                else break;
            }
            for(i=0; bee>0; bee--){
                if(bre>1){
                    i++;
                    bre-=2;
                }
                else
                    break;
            }
            i = i*hb;
            j = j*cb;
            cout<<i+j<<endl;
        }
    }

    return 0;
}
