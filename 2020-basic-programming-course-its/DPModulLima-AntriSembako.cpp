#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int n, real_count, m, number[100005], cnt;
bool cek;

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>m;
        for(int j=1; j<=m; j++){
            cin>>number[j];
        }
        cek=true;
        cnt=0;
        for(int j=1; j<=m; j++){
            real_count=0;
            for(int k=j; k<=m; k++){
                if(number[j]>number[k]){
                    real_count++;
                    if(real_count>2){
                        cek=false;
                        break;
                    }
                }
            }
            cnt+=real_count;
        }
        if(cek){
            cout<<cnt<<endl;
        }
        else{
            cout<<"Rusuh gan"<<endl;
        }
    }
}
