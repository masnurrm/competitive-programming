#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int a, b;
    float sum, dec, multi, div;
    cin>>a>>b;
    sum=a+b;
    dec=a-b;
    multi=a*b;
    div=a/b;
    cout<<fixed;
    cout<<setprecision(2)<<sum<<" ";
    cout<<setprecision(2)<<dec<<" ";
    cout<<setprecision(2)<<multi<<" ";
    cout<<setprecision(2)<<div<<endl;
    return 0;
}