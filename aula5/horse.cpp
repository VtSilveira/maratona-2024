#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> array;
    for(int i = 0; i < 4; i++){
        int number;
        cin >> number;
        if(find(array.begin(), array.end(), number) == array.end())
            array.push_back(number);
    }

    cout << 4 - array.size() << endl;

    return 0;
}