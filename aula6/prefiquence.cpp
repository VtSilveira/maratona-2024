#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, indice = 0;
        vector<int> a;
        cin >> n >> m;

        string input;
        cin >> input;

        for(char c : input){
            a.push_back(c - '0');  // Converte o caractere para número inteiro 
        }
        cin >> input;

        for(char c : input){
            if(indice < a.size() && (c-'0') == a[indice]) // encontrou elemento
                indice++;            
        }
        cout << indice << endl;
    }
    return 0;
}