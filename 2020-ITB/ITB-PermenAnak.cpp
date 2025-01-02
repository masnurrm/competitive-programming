#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, k, total;
    total=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>k;
        total=total+k;
    }
    total=total/n;
    cout<<total<<endl;
    return 0;
}