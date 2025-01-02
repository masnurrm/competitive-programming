#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, i, score=0;
    cin>>n;
    int a[n], b[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
        if(a[i]>b[i]){
            score+=3;
        }
        else if(a[i]==b[i]){
            score+=1;
        }
    }
    cout<<score<<endl;
    return 0;
}