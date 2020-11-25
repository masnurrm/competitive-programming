#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, n, k, arr[201], hadir;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        hadir=0;
        for(int j=0; j<n; j++){
            cin>>arr[j];
            if (arr[j]<=0){
                hadir=hadir+1;
            }
        }
        if(hadir<k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}