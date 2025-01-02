#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, cek, i=1;
    cin>>n;
    while(cek!=n){
        bool prima=false;
        if(i==1){
            cek+=0;
        }
        else if(i==2||i==3){
            cout<<i<<" ";
            cek+=1;
        }
        else{
            int akar=sqrt(i);
            for(int j=2; j<=akar; j++){
                if(i%j==0){
                    prima=false;
                    break;
                }
                else if(i%j!=0){
                    prima=true;
                }
            }
            if(prima){
                cek+=1;
                cout<<i<<" ";
            }
        }
        i++;
    }
    return 0;
}