#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p, q, l;
    long long m, s, baris, kolom;
    cin>>p>>l>>s;
    
    if (p>=1&&p<=1000000&&l>=1&&l<=1000000&&s>=1&&s<=1000000){
        if (p<s&&l<s){
            cout<<"0"<<endl;
        }
        else{
             q=(p+1)/s; 
             if((p+1)%s!=0){
                 q=q+1;
             }

             m=(l+1)/s;
             if((l+1)%s!=0){
                 m=m+1;
             }

             baris=q;
             kolom=m;
             long long total;
             total=baris*kolom;
             cout<<total<<endl;
        }
    }
    return 0;
}
