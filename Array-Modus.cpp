#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, angka[1001], modus[1001], max, hasil;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>angka[i];
    }
    for (int i=0; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if (angka[j]==angka[i]){
                modus[j]++;
            }
        }
        if(modus[j]>modus[j-1]){
            hasil=angka[j];
        }
    }
    cout<<hasil<<endl;
    return 0;
}