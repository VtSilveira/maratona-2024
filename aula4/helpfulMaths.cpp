#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vetor;
    string cadeia_string;
    char delimitador = '+';

    cin >> cadeia_string;

    stringstream ss(cadeia_string);
    string token;

    while(getline(ss, token, delimitador))
        vetor.push_back(stoi(token));

    sort(vetor.begin(), vetor.end());
    for(size_t i = 0; i < vetor.size(); i++)
        cout << vetor[i] << (i == vetor.size() - 1 ? "\n" : "+");
}