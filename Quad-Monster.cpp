#include <iostream>
using namespace std;

int main()
{
    int t, i;
    int plunge=0, tackle=0;
    char arr[101];
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>arr[j];
    }
    cin.ignore();
    for(i=0;i<t;i++){
        if ((arr[i]=='C')&&(arr[i-1]=='C')){
            tackle++;
            if(plunge==3){
                cout<<"P";
            }
            else{
                cout<<"B";
            }
        }

        if ((arr[i]=='S')&&(arr[i-1]=='S')){
            tackle++;
            if(tackle==3){
                cout<<"T";
            }
            else{
                cout<<"D";
            }
        }


        
        /*
        if((arr[i]=='C')&&(arr[i-1]=='C')&&(arr[i-2]=='C')){
            plunge=true;
            cout<<"P";
        }
        else if((arr[i]=='S')&&(arr[i-1]=='S')&&(arr[i-2]=='S')){
            tackle=true;
            cout<<"T";
        }
        else if(arr[i] == 'C'){
            cout<<"B";
        }
        else if(arr[i] == 'S'){
            cout<<"D";
        }
        */
    }

    return 0;
}