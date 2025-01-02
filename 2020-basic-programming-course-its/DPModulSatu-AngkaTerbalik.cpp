#include <iostream>
using namespace std;

int main() {
    int a, b, hasil;
    cin>>a;
    hasil=0;

        if(a>=0&&a<=9){
            
            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=99){
          
            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=999){

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=9999){

            b=a%10;
            hasil=hasil+b*1000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=99999){

            b=a%10;
            hasil=hasil+b*10000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=999999){

            b=a%10;
            hasil=hasil+b*100000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=9999999){
           
            b=a%10;
            hasil=hasil+b*1000000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }
        if(a>=0&&a<=99999999){
            b=a%10;
            hasil=hasil+b*10000000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1000000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1000;
            a=a/10;

            b=a%10;
            hasil=hasil+b*100;
            a=a/10;

            b=a%10;
            hasil=hasil+b*10;
            a=a/10;

            b=a%10;
            hasil=hasil+b*1;
            a=a/10;
        }    

    cout<<hasil<<endl;
    return 0;
}