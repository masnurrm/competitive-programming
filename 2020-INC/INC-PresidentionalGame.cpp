#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, k, sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0){
        cout<<"Preston"<<endl;
    }
    else{
        cout<<"John"<<endl;
    }
    return 0;
}