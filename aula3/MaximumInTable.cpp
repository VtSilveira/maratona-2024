#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int matriz[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0) 
                matriz[i][j] = 1;
            else if(i == 0 && j > 0)
                matriz[i][j] = matriz[i][j-1] + matriz[i][j];
            else if(i > 0 && j == 0)
                matriz[i][j] = matriz[i-1][j] + matriz[i][j];
            else 
                matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
        }
    }

    cout << matriz[n-1][n-1] << endl;
}