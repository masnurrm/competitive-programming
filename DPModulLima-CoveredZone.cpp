#include <iostream>

using namespace std;

int m, n, a, b;
long int arr[7900][7900], cnt;

void ltstep(int x, int y){
    if(x<1||y>n){
        return;
    }
    else if(x!=0&&y!=n+1){
        arr[x][y]++;
        cnt++;
        if(arr[x][y]==2){
            arr[x][y]--;
            cnt--;
        }
        ltstep(x-1, y+1);
        return;
    }
}

void lbstep(int x, int y){
    if(x<1||y<1){
        return;
    }
    else if(x!=0&&y!=0){
        arr[x][y]++;
        cnt++;
        if(arr[x][y]==2){
            arr[x][y]--;
            cnt--;
        }
        lbstep(x-1, y-1);
        return;
    }
}

void rtstep(int x, int y){
    if(x>n||y>n){
        return;
    }
    else if(x!=n+1&&y!=n+1){
        arr[x][y]++;
        cnt++;
        if(arr[x][y]==2){
            arr[x][y]--;
            cnt--;
        }
        rtstep(x+1, y+1);
        return;
    }
}

void rbstep(int x, int y){
    if(x>n||y<1){
        return;
    }
    else if(x!=n+1&&y!=0){
        arr[x][y]++;
        cnt++;
        if(arr[x][y]==2){
            arr[x][y]--;
            cnt--;
        }
        rbstep(x+1, y-1);
        return;
    }
}

int main() {
    cin>>n>>m;
    cnt=0;
    arr[n][n]={0};
    for(int i=0; i<m; i++){
        cin>>a>>b;
        ltstep(a,b);
        lbstep(a,b);
        rtstep(a,b);
        rbstep(a,b);
    }
    cout<<cnt<<endl;
    return 0;
}