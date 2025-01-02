#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, m, bid=0;
    cin>>n;
    int s[n], harga[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
        harga[i]=s[i];
    }
    bool* a = new bool[n];
    cin>>m;
    int b[m];
    for(int j=0; j<m; j++){
        cin>>b[j];
        for(int k=0; k<n; k++){
            if(b[j]>=s[k]){
                a[k] = 1;
                s[k]=b[j];
                if(s[k]<b[j+1]){
                    bid--;
                }
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<s[i]<<" ";
        harga[i]=s[i];
    }
    
    //cout<<bid<<endl;
    return 0;
}