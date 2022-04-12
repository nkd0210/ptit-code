#include<iostream>
using namespace std;
int main(){
    int m,n,k;
    cin >> m >> n >> k;
    int a[100][100];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(a[0][k-1] > a[1][k-1]){
               int temp =a[0][k-1];
               a[0][k-1] = a[1][k-1];
               a[1][k-1] = temp;

           }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}