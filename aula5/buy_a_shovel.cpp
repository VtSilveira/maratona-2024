#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r, result = 0, aux = 0;
    cin >> k >> r;

    while(1){
        result++;
        aux = (k * result)/10;
        aux = ((k * result) - (aux * 10)) - r;
        if(aux == 0 || ((k*result) % 10) == 0)
            break;
    }

    cout << result << endl;
}