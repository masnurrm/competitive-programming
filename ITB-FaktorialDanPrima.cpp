#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;


int main(){
    int l, p, r, i, j;
    bool prima;
    cout<<"Masukkan L: ";
    cin>>l;
    cout<<"Masukkan R: ";
    cin>>r;
    cout<<"Masukkan P: ";
    cin>>p;

    prima=true;
    if(p<=1){
        prima=false;
    }
    else if(p>=4){
        for(i=2; i<=p-1; i++){
          if(p%i==0){         
               prima=false;
               break; 
          }
        }
    }

    if(prima){
        int kali, x, pangkat;
        kali=1;
        x=0;
        for(j=l; j<=r; j++){
            kali=kali*j;
        }
        pangkat=pow(p,x);
        while(kali%pangkat==0){
            x++;
            pangkat=pow(p,x);
        }
        cout<<"X bernilai "<<x<<endl;
    }
    else{
        cout<<"P bukan prima"<<endl;
    }
    return 0;
}
