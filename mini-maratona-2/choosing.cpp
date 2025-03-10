#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, f, k;

    cin >> n >> f >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
      cin >> v[i];

    int fav_number = v[f - 1];
    int counter_fav = 0;

    for (int i = 0; i < n; i++) {
      if (v[i] == fav_number)
        counter_fav++;
    }

    sort(v.rbegin(), v.rend());

    int t_counter_fav = counter_fav;

    for (int i = 0; i < k; i++) {
      if (v[i] == fav_number)
        counter_fav--;
    }

    if (counter_fav == 0)
      cout << "YES" << endl;
    else if (counter_fav == t_counter_fav)
      cout << "NO" << endl;
    else if (counter_fav > 0 && counter_fav < t_counter_fav)
      cout << "Maybe" << endl;
  }
}