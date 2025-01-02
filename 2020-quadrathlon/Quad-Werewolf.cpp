#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int n, a, max=0;
    cin>>n;
    if(n>=1&&n<=100000){
        while(n--){
            cin>>a;
            if(a>=1&&a<=1000000000){
                if(max>a){
                    max=max;
                }
                else{
                    max=a;   
                }
                
            }
        }
        cout<<max<<endl;
    }    
    return 0;
}