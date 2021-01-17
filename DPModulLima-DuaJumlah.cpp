#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, indeks[1001], t, bil1, bil2;
bool cek=false;

int main() {
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>indeks[i];
    } 
    cin>>t;
    
    for(int i=1; i<=n; i++){
        if(cek){
            break;
        }
        bil1=0;
        bil2=0;
        if(i>=t){
            break;
        }
        if(i<t){
            bil1=i;
            for(int j=i+1; j<=n; j++){
                if(indeks[i]+indeks[j]==t){
                    cek=true;
                    bil2=j;
                    break;
                }
            }  
        }
        
    }
    
    if(cek){
        cout<<bil1<<" "<<bil2<<endl;
    }
    else{
        cout<<"Gaada bebs."<<endl;
    }
    return 0;
}
