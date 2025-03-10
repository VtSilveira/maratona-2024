#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, entrada = 0, vetorX = 0, vetorY = 0, vetorZ = 0;
    cin >> n;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> entrada;
            if(j == 0)
                vetorX += entrada;
            else if(j == 1)
                vetorY += entrada;
            else
                vetorZ += entrada;
        }
    }

    if(vetorX + vetorY + vetorZ == 0 && vetorX == 0 && vetorY == 0 && vetorZ == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;



}