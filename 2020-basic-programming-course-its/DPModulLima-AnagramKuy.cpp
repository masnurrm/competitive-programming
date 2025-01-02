#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string s, t;
int longs, longt;
bool cek;

void banding(){
    for(int i=0; i<longs; i++){
        if(s[i]!=t[i]){
            cek=false;
            break;
        }
        else if(s[i]==t[i]){
            cek=true;
        }
    }
    
}

void anagram(){
    string temp;
    for(int i=0; i<longs; i++){
        for(int j=0; j<longs; j++){
            if(s[i]<s[j]){
               temp[0]=s[i];
               s[i]=s[j];
               s[j]=temp[0];
            }
        }
    }
    for(int i=0; i<longt; i++){
        for(int j=0; j<longt; j++){
            if(t[i]<t[j]){
               temp[0]=t[i];
               t[i]=t[j];
               t[j]=temp[0];
            }
        }
    }
    banding();
}

int main(){
    cin>>s>>t;
    bool tes=true;
    longs=s.length();
    longt=t.length();
    if(longs>=2&&longs<=100&&longt>=2&&longt<=100){
        if(longs==longt){
            for(int i=0; i<longs; i++){
                if(s[i]!=t[i]){
                    tes=false;
                    break;
                }
            }
            if(tes){
                cek=false;
            }
            else{
                anagram();      
            }
        }
    }
    
    if(cek){
        cout<<"Yes, it's anagram.\n";
    }
    else{
        cout<<"No, it's not.\n";
    }
    return 0;
}
