#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int a, t, k;
    double m, s, area;
    cin>>a>>t;
    if((a>=0&&a<=1000)&&(t>=0&&t<=1000)){
        if(a==0||t==0){
            cout<<"0.00"<<endl;
        }
        else{
            k=a*a+t*t;
            m=sqrt(k);
            s=(m*a*t)/(t*t+a*t+a*a);
            area=s*s;
            cout<<fixed;
            cout<<setprecision(2)<<area<<endl;
        }
    }
    return 0;
}
