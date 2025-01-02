#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, prize, bagi=0;
    cin>>n;
    if(n>=1&&n<=100000){
        prize=0;
        int arr[n];

        prize=prize-bagi;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==2||arr[i]==3){
                bagi++;
            }
            if(arr[i]>=0&&arr[i]<=3){
                if(arr[i]>=1){
                    prize++;
                }
                if(arr[i]!=0){
                    if(arr[i]==2){
                        if(arr[i-1]==0){
                            arr[i-1]=1;
                            arr[i]-=1;
                            prize+=1;
                        }
                        else if(arr[i+1]==0){
                            arr[i+1]=1;
                            arr[i]-=1;
                            prize+=1;
                        }
                    }
                    else if(arr[i]==3){
                        if((arr[i-1]==0)||(arr[i+1]==0)){
                            arr[i-1]=1;
                            arr[i+1]=1;
                            arr[i]-=2;
                            prize+=1;
                        }
                    }
                }
            }
        }
        bagi=bagi/2;
        cout<<bagi<<endl;
        cout<<prize<<endl;
    }
    return 0;
}