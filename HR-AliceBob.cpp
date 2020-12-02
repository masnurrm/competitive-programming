#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int i=0, a[101];
    while(i>=0){ 
        if(endl){
            break;
        }
        scanf("%d",&a[i]);
        i++;
    }

    int j=0, b[101];
    while(j>=0){ 
        if(endl){
            break;
        }
        scanf("%d",&b[j]);
        j++;
    }
    

    int alice=0, bob=0;
    if(i==j){
        for(int x=0; x<i; x++){
            if(a[x]>b[x]){
                alice+=1;
            }
            else if(a[x]<b[x]){
                bob+=1;
            }
        }
    }
    printf("%d %d", alice, " ", bob );
    return 0;
}