#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, k, n, q;
    cin >> t;
    for(int i = 0; i < t; i++){
        vector<int> array;
        cin >> k >> n;
        while(k--){
            int number;
            cin >> number;
            array.push_back(number);
        }
        while(n--){
            cin >> q;
            if(q < array[0])
                cout << q << " ";
            else
                cout << array[0] - 1 << " ";
        }
        cout << endl;
    }
}