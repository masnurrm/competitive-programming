#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int n, like, cumulative;
    double share;
    cin>>n;
    share=5;
    for(int i=1; i<=n; i++){
        like=floor(share/2);
        cumulative+=like;
        share=like*3;
    }
    cout<<cumulative<<endl;

    return 0;
}
