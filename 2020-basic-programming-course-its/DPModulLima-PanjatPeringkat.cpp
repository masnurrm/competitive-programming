#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

long int bil, m, n, ranking[200010], skor, cnt;

int posisi(int left, int right){
    int pivot=(left+right)/2;
    if((skor>=ranking[pivot])&&(skor<ranking[pivot-1])){
        return pivot;
    }
    else if(skor>ranking[pivot]){
        return posisi(left, pivot-1);
    }
    else{
        return posisi(pivot+1, right);
    }
}

int main() {
    cin>>m;
    for(int i=1; i<=m; i++){
        cin>>bil;
        if(bil!=ranking[cnt]){
            cnt++;
            ranking[cnt]=bil;
        }
    }
    
    ranking[0]=2147483647;
    ranking[cnt+1]=-2147483648;
    
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>skor;
        cout<<posisi(0, cnt+1)<<endl;
    }
    
    return 0;
}