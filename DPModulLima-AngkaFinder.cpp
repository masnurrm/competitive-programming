#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int t, n, s[10005], angka, ubah;

int main(){
    cin>>t;
    for(int j=0; j<t; j++){
        ubah=0;
        cin>>n;
        memset(s, 0, sizeof(s));
        for(int i=0; i<n; i++){
            cin>>angka;
            s[angka]++;
        }
        for(int i=1; i<=10000; i++){
            if(s[i]>1){
                ubah=ubah+s[i]-1;
            }
        }
        cout<<ubah<<endl;
    }
    return 0;
}
