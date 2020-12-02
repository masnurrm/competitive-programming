#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, n, i, j, k, tmp, selisih, a, b, minsel=100000;
    int arr[100000];
    bool tukar;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        for(j=0; j<n; j++){
            cin>>arr[j];
        }
        for (k=0; k<n; k++){ 
            tukar=false; 
            for (j=0; j<n; j++){ 
                if (arr[j]<arr[j+1]){  
                    tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                    tukar=true; 
                } 
            }
            if (tukar==false){
                break; 
            }
        }         

        for(k=0; k<n-1; k++){
            for(j=k+1; j<n; j++){
                selisih=arr[k]-arr[j];
                if(selisih<minsel){
                    minsel=selisih;
                    a=arr[k];
                    b=arr[j];
                }
            }
        }
        cout<<b<<" "<<a;
    }

    /*
    for (i=0; i<n; i++){ 
        tukar=false; 
        for (j=0; j<n; j++){ 
            if (arr[j]<arr[j+1]){  
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                tukar=true; 
            } 
        }
        if (tukar==false){
            break; 
        }
    }         

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            selisih=arr[i]-arr[j];
            if(selisih<minsel){
                minsel=selisih;
                a=arr[i];
                b=arr[j];
            }
        }
    }
    cout<<b<<" "<<a<<endl;
    */
    return 0;
}