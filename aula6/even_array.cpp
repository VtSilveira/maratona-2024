#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;

    cin >> t;

    while(t--){
        cin >> n;
        int count_odd = 0, count_even = 0;

        for(int i = 0; i < n; i++){
            int number;
            cin >> number;
            if((i % 2 != number % 2) && i % 2 == 0) // par
                count_even++;
            else if((i % 2 != number % 2) && i % 2 != 0){ // impar
                count_odd++;
            } 
        }
        if(count_odd == count_even && n > 1){
            cout << count_odd << endl;
        }else if(count_odd == count_even && n < 2)
            cout << "0" << endl;
        else
            cout << "-1"<< endl;
    }

    return 0;
}