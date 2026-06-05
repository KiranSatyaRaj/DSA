#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;
      arr[i].push_back(num);
    }
  }

  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
      swap(arr[i][j], arr[j][i]);

  for (int i = 0; i < n; i++)
    reverse(arr[i].begin(), arr[i].end());

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << arr[i][j] << " ";
    cout << '\n';
  }

  return 0;
}
