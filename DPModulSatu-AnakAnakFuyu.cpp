#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>0&&b>0&&c>0&&d>0){
        if(a==1&&b==2&&c==3&&d==4){
            cout<<"Santuy Fuyu~"<<endl;
        }
        else if(a==4&&b==3&&c==2&&d==1){
            cout<<"Santuy Fuyu~"<<endl;
        }
        else if(a>=5||b>=5||c>=5||d>=5||a==b||a==c||a==d||b==c||b==d||c==d){
            cout<<"Urutan tidak valid."<<endl;
        }
        else {
            cout<<"Semangat Fuyu! Kamu pasti bisa!"<<endl;
        }
    }
    return 0;
}
