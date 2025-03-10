#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, total_minimum_distance = 0, points = 3;
	vector<int> vetor;

	while(points--){
		cin >> x; 
        vetor.push_back(x);
    }
	sort(vetor.begin(), vetor.end());
	
	total_minimum_distance += (vetor[1] - vetor[0]) + (vetor[2] - vetor[1]);

    cout << total_minimum_distance << endl;
}