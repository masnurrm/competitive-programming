#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   
int main() {
    unsigned long long int a,b;
    long long int sum;
    char tanda;
    cin>>a>>tanda>>b;
    
    switch (tanda){
        case '+':
        a=a%10000007;
        b=b%10000007;
        sum=(a+b)%10000007;
        cout<<sum<<endl;
        break;
        
        case '-':
        sum=a-b;
        if(sum>0){
            sum=sum%10000007;
            cout<<sum<<endl;
        }
        else{
            cout<<sum<<endl;
        }
        break;
    }
    
    

    return 0;
}

