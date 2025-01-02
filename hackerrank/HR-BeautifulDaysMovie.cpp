#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, j, k, l, temp, beautiful=0, selisih, flip;
    cin>>i>>j>>k;
    for(int a=i; a<=j; a++){
        flip=0;
        selisih=0;
        temp=a;
        l=a;
        while(l>0){
            flip=flip*10+l%10;
            l=l/10;
        }
        int kurang=flip-temp;
        selisih=abs(kurang);
        if(selisih%k==0){
            beautiful+=1;
        }
    }
    cout<<beautiful<<endl;


    return 0;
}
