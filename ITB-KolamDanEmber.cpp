#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int x, y, z, c, i, j, satu, dua;
    bool ketemu;
    cout<<"Masukkan x: ";
    cin>>x;
    cout<<"Masukkan y: ";
    cin>>y;
    cout<<"Masukkan z: ";
    cin>>z;
    
    ketemu=false;
    dua=0;
    c=z/y;
    for (i=1; i<=c; i++){
        dua=dua+1;
        j=z-(y*i);
        if(j%x==0){
            satu=j/x;
            ketemu=true;
            break;
        }
 
    }

    if(ketemu==true){
        cout<<satu<<" kali ember 1, "<<dua<<" kali ember 2"<<endl;
    }
    else{
        cout<<"Tidak mungkin"<<endl;
    }

    return 0;
}