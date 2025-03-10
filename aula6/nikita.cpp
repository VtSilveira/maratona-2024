#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        if(n < m)
            cout << "No" << endl;
        else if(n == m)
            cout << "Yes" << endl;
        else if (n % 2 != 0 && m % 2 != 0) 
            cout << "Yes" << endl;
        else if (n % 2 == 0 && m % 2 == 0) 
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}