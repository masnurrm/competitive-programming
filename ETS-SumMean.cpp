#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, jumlah=0;
    float rata;
    cin>>n;
    for(int i=1; i<=n; i++){
        jumlah+=i;
    }
    rata=(float)jumlah/n;
    cout<<"jumlah deret matematika sampai suku ke-n adalah "<<jumlah<<endl;
    cout<<"rata-rata deret matematika sampai suku ke-n adalah "<<(float)rata<<endl;
    return 0;
}