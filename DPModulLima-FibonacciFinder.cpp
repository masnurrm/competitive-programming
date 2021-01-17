#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
string opsi;
unsigned long long int indeks, fibo1, fibo2, fibo3;

void index(){
    fibo1=1;
    fibo2=1;
    fibo3=fibo1+fibo2;
    int cnt=2;
    if(indeks==1){
        cout<<fibo1<<endl;
    }
    else if(indeks==2){
        cout<<(fibo3+1)<<endl;
    }
    else{
        while(fibo3<=indeks){
            fibo3=fibo1+fibo2;
            fibo1=fibo2;
            fibo2=fibo3;
            cnt++;
            if(fibo3==indeks){
                cout<<cnt<<endl;
            }
        }
    }
}

void fibo(){
    fibo1=1;
    fibo2=1;
    if(indeks==1||indeks==2){
        cout<<fibo1<<endl;
    }
    else{
        for(int j=2; j<indeks; j++){
            fibo3=fibo1+fibo2;
            fibo1=fibo2;
            fibo2=fibo3;
        }
        cout<<fibo3<<endl;
    }
}

int main() {
    cin>>n;
    if(n>=1&&n<=50){
        for(int i=0; i<n; i++){
            cin>>opsi>>indeks;
            if(indeks>=1&&indeks<=2880067194370816120){
                if(opsi=="index"){
                    index();
                }
                else if(opsi=="fibo"){
                    if(indeks<=90){
                        fibo();
                    }
                }
            }
        }
    }
    return 0;
}