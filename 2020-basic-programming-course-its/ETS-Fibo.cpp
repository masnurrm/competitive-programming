#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, fibo1=0, fibo2=1, fibon=0;
    cin>>n;
    if(n==1){
        cout<<fibo1<<endl;
    }
    else if(n==2){
        cout<<fibo2<<endl;
    }
    else{
        for(int i=3; i<=n; i++){
            fibon=fibo1+fibo2;
            fibo1=fibo2;
            fibo2=fibon;
        }
        cout<<fibon<<endl;
    }
    return 0;
}