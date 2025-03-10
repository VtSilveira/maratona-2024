#include <bits/stdc++.h>
using namespace std;

void stringAbreviation(vector<string>& words, int n){
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        if(word.size() <= 10)
            words.push_back(word);
        else{
            int size;
            size = word.size() - 2;
            word = word[0] + to_string(size) + word[word.size() - 1]; // concatenação de strings
            words.push_back(word);
        }
    }
}

int main(){
    int n;
    vector<string> words;

    cin >> n;
    stringAbreviation(words, n);
    for(const string& word : words)
        cout << word << endl;
}