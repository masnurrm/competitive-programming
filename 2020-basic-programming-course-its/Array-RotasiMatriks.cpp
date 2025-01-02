#include <iostream>
using namespace std;

int main(){
    int n, m, matriks[1001][1001];
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matriks[i][j];
        }
    }
    int rotasi[1001][1001];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            rotasi[j][i]=matriks[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<rotasi[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}