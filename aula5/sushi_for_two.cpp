#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux_ONE = 0, aux_TWO = 0;

    vector<int> max_count;
    vector<int> max_diff;

    cin >> n;
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        if(number == 1){            
            aux_ONE++;
            if(aux_TWO > 0){
                max_count.push_back(aux_TWO);
                aux_TWO = 0;
            }
        }
        else{ 
            aux_TWO++;
            if(aux_ONE > 0){
                max_count.push_back(aux_ONE);
                aux_ONE = 0;
            }
        }
    }
    if(aux_TWO > 0)
        max_count.push_back(aux_TWO);
    if(aux_ONE > 0)
        max_count.push_back(aux_ONE);

    for(int i = 1; i < max_count.size(); i++){  
        if(max_count[i] <= max_count[i-1])
            max_diff.push_back(max_count[i]*2);
        else 
            max_diff.push_back(max_count[i-1]*2);
    }
    sort(max_diff.rbegin(), max_diff.rend());
    cout << max_diff[0] << endl;
}