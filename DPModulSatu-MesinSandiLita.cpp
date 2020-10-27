#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;


int main() {
    char s;
    string u;
    unsigned long long int t;
    cin>>u>>t;
    int jumlah;
    jumlah=u.length();
    if (jumlah==1){
        s=u[0];
        if(t>=0){
            if((s>='A'&&s<='Z')||(s>='a'&&s<='z')){
                if(s>='A'&&s<='Z'){
                    int a=(s+t-65)%26+65;    
                    cout<<(char)a<<endl;
                }
                else if (s>='a'&&s<='z'){
                    int a=(s+t-97)%26+97;   
                    cout<<(char)a<<endl;
                }
            }
            else{
                cout<<"Mesin sandi Lita belum kuat~"<<endl;
            }
        }
        else{
            cout<<"Mesin sandi Lita belum kuat~"<<endl;
        }
    
    }
    else{
        cout<<"Mesin sandi Lita belum kuat~"<<endl;
    }
return 0;
}
