#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int a, b;
    char arr[100][100];
    cin>>a>>b;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    string gerak[100000];
    cin>>gerak;
    int panjang=gerak.length();
    for(int i=0; i<panjang; i++){
        //mbuh lanjutno hel:v
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}