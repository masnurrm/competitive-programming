#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int total, n;
    cout<<"Masukkan lama hari menabung: ";
    cin>>n;
    total=1000+(2500*n);
    cout<<"Saldo tabungan Tuan Mor pada hari ke-"<<n<<" adalah "<<total<<endl;
    return 0;
}