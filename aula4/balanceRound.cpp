#include <bits/stdc++.h>
using namespace std;

void balance(vector<int> vetor, int k){ // Recebe o vetor de dificuldades e retorna um inteiro com a quantidade minima a remover para balancear o vetor
	int max_sequence = 0, aux = 0;

	for(size_t i = 1; i < vetor.size(); i++){
		if(vetor[i] - vetor[i - 1] <= k)
			aux++;
		else
            aux = 0;
        if(aux > max_sequence) // atualiza o novo maior subgrupo
			max_sequence = aux;
    }
    if(vetor.size() == 1)
        cout << 0 << endl;
    else
	    cout << vetor.size() - (max_sequence + 1) << endl;
}

int main(){
	int t, n, k, elemento;
	vector<int> vetor;

    cin >> t;
	while(t--){
        cin >> n >> k;
        while(n--){
		    cin >> elemento;
		    vetor.push_back(elemento);
        }
        sort(vetor.begin(), vetor.end());
        balance(vetor, k);
        vetor.clear();
	}		
}