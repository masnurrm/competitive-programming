#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, jumlah=0;
    cin>>n;
    char ivan[n];
    for(int i=0; i<n; i++){
        cin>>ivan[i];
    }
    for(int i=0; i<n; i++){
        if(ivan[i]=='I'){
            for(int j=i+1; j<n; j++){
                if(ivan[j]=='I'){
                    break;
                }
                else if(ivan[j]=='V'){
                    for(int k=j+1; k<n; k++){
                        if(ivan[k]=='V'){
                            break;
                        }
                        else if(ivan[k]=='A'){
                            for(int l=k+1; l<n; l++){
                                if(ivan[l]=='A'){
                                    break;
                                }
                                else if(ivan[l]=='N'){
                                    jumlah+=1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout<<jumlah<<endl;
    return 0;
}