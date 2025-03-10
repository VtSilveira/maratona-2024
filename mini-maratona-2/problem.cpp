#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    map<char, int> count;

    for (char c : a) {
      count[c]++;
    }

    int min_problems_needed = 0;
    for (char level = 'A'; level <= 'G'; ++level) {
      if (count[level] < m) {
        min_problems_needed += (m - count[level]);
      }
    }

    cout << min_problems_needed << endl;
  }

  return 0;
}