#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    unsigned long long int a, b, i, j, sum;
    int c;
    cin>>a>>b>>c;
    if (a>=1&&b>=1){
        sum=a+b;
    }
    
    if (c>=1&&c<=3){
        if(c==1){
            i=sum%10;
            j=i/1;
            cout<<j<<endl;
        }
        else if(c==2){
            i=sum%100;
            j=i/10;
            cout<<j<<endl;
        }
        else if(c==3){
            i=sum%1000;
            j=i/100;
            cout<<j<<endl;
        }
    }
    else{
        cout<<"Digit tidak valid."<<endl;
    }
    
    return 0;
}
