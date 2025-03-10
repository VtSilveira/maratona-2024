#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int R = 0, B = 0, G = 0;
    char array[55];
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    if (n <= 50) {
        for (int i = 0; i < n - 1; i++) { // Adjusted loop to avoid out-of-bounds access
            if (array[i] == array[i + 1]) {
                if (array[i] == 'R') {
                    R++;
                } else if (array[i] == 'B') {
                    B++;
                } else if (array[i] == 'G') {
                    G++;
                }
            }
        }
        
        int sum = R + G + B;
        cout << sum << endl;
    } 
    
    return 0;
}

