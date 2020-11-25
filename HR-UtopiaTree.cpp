#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int t, tree, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        tree=1;
        if(n==0){
            tree=1;
        }
        else{
            for(int j=1; j<=n; j++){
                if(j%2==0){
                    tree+=1;
                }
                else{
                    tree*=2;
                }
            }
        }
        cout<<tree<<endl;
    }
    return 0;
}