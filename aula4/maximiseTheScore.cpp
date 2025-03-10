#include <bits/stdc++.h>
using namespace std;

void eraseWhiteboard(vector<int> vetor){ // Recebe o vetor de inteiros e realiza a soma dos números positivos e negativos
	int x, y, count = 0;

    while(!vetor.empty()){ 
        x = vetor[0];
        y = vetor[1];
        if( x == y || x < y){
            count += x;
            vetor.erase(vetor.begin(), vetor.begin() + 2);
        }else{
            count += y;
            vetor.erase(vetor.begin(), vetor.begin() + 2);
        }
    }

	cout << count << endl;
}

int main(){
	int t, n, elemento;
	vector<int> vetor;

    cin >> t;
	while(t--){
        cin >> n;
        n = n * 2;
        while(n--){
		    cin >> elemento;
		    vetor.push_back(elemento);
        }
        sort(vetor.begin(), vetor.end());
        eraseWhiteboard(vetor);
        vetor.clear();
	}		
}