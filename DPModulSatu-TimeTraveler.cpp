#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    if(b>=0&&b<=59){
        if (a==0){
            if(b<10){
                cout<<"12 0"<<b<<" AM"<<endl;
            }
            else{
                cout<<"12 "<<b<<" AM"<<endl;
            }
        }
        else if(a<12&&a>=1){
            if(a<10){
                cout<<"0";
                cout<<a<<" ";
            }
            else {
                cout<<a<<" ";
            }

            if(b<10){
                cout<<"0"<<b<<" AM"<<endl;
            }
            else{
                cout<<b<<" AM"<<endl;
            }
        }
        else if (a==12){
            cout<<"12 ";
            if(b<10){
                cout<<"0"<<b<<" PM"<<endl;
            }
            else{
                cout<<b<<" PM"<<endl;
            }        
        }

        else if(a>=0&&a<24){
            a=a-12;
            if(a<10){
                cout<<"0";
                cout<<a<<" ";
            }
            else {
                cout<<a<<" ";
            }

            if(b<10){
                cout<<"0"<<b<<" PM"<<endl;
            }
            else{
                cout<<b<<" PM"<<endl;
            }        
        }

        else if (a==24){
            if(b<10){
                cout<<"12 0"<<b<< " AM"<<endl;
            }
            else{
                cout<<"12 "<<b<< " AM"<<endl;
            }
        }

        else {
            cout<<"Muzukashi"<<endl;
        }
    }
    else{
        cout<<"Muzukashi"<<endl;
    }
    return 0;
}
