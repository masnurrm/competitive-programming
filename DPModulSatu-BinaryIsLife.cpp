#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int desi;
    cin>>desi;
    if(0<=desi&&desi<=255){
        
        if(desi>=128){
            desi=desi-128;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=64){
            desi=desi-64;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=32){
            desi=desi-32;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=16){
            desi=desi-16;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=8){
            desi=desi-8;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=4){
            desi=desi-4;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=2){
            desi=desi-2;
            cout<<"1";
        }
        else{
            cout<<"0";
        }

        if(desi>=1){
            desi=desi-1;
            cout<<"1";}
        else{
            cout<<"0";
        }
    }

    return 0;
}
