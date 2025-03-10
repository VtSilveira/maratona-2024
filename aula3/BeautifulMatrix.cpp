#include <bits/stdc++.h>
using namespace std;
#define linha 5
#define coluna 5

vector<int> inicializarMatriz(int matriz[linha][coluna]){
    vector<int> indices;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 1){
                indices.push_back(i);
                indices.push_back(j);
            }
        }
    }
    return indices;
}

int swaps(vector<int> indicesNumberOne){
    int numberSwaps = 0;
    if(indicesNumberOne[0] < 2)
        numberSwaps += 2 - indicesNumberOne[0];
    if(indicesNumberOne[1] < 2)
        numberSwaps += 2 - indicesNumberOne[1];
    if(indicesNumberOne[0] > 2)
        numberSwaps += indicesNumberOne[0] - 2;
    if(indicesNumberOne[1] > 2)
        numberSwaps += indicesNumberOne[1] - 2;
    
    return numberSwaps;
}

int main(){
    int matriz[linha][coluna];
    vector<int> indicesNumberOne;

    indicesNumberOne = inicializarMatriz(matriz);
    cout << swaps(indicesNumberOne) << endl;

}