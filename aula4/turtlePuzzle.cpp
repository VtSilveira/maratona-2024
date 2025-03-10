#include <bits/stdc++.h>
using namespace std;

void sumMax(vector<int> vetor){ // Recebe o vetor de inteiros e realiza a soma dos números positivos e negativos
	int positive_numbers = 0, negative_numbers = 0;

	for(size_t i = 0; i < vetor.size(); i++)
		if(vetor[i] >= 0)
			positive_numbers += vetor[i];
		else
			negative_numbers += vetor[i];

	cout << positive_numbers + (-(negative_numbers)) << endl;
}

int main(){
	int t, n, elemento;
	vector<int> vetor;

    cin >> t;
	while(t--){
        cin >> n;
        while(n--){
		    cin >> elemento;
		    vetor.push_back(elemento);
        }
        sumMax(vetor);
        vetor.clear();
	}		
}