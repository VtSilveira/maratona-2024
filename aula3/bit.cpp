#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, X = 0; 
    string word;

    cin >> n;

    while(n--){
        cin >> word;
        if(word == "X++" || word == "++X")
            X++;
        else
            X--;
    }

    cout << X << endl;
}