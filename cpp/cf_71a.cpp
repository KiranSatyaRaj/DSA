#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  string words[n];
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> words[i];
    if (words[i].length() > 10) {
      arr[i] = words[i].length() - 2;
    } else {
      arr[i] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      cout << words[i] << '\n';
    } else {
      cout << words[i][0] << arr[i] << words[i][words[i].length()-1] << '\n';
    }
  }
  
  return 0;
}
