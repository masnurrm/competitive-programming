#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    long long int total;
    cin>>a;
    if(a>=1&&a<=999999){
        total=(2*a+2)*a;
        cout<<total<<endl;
    }
    
    return 0;
}
