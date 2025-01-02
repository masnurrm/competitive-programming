#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int t, n, k, hadir;
    cin>>t;
    if(t>=1&&t<=10){
        for(int i=0; i<t; i++){
            cin>>n>>k;
            int arr[n];
            if(n>=1&&n<=1000){
                if(k>=1&&k<=n){
                    hadir=0;
                    for(int j=1; j<=n; j++){
                        cin>>arr[j];
                        if(arr[j]>=-100&&arr[j]<=100){
                            if (arr[j]<=0){
                                hadir=hadir+1;
                            }
                        }
                    }
                    if(hadir<k){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
