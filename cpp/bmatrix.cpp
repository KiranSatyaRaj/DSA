#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int x, y;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int num;
      cin >> num;
      if (num == 1) {
        x = i+1;
        y = j+1;
      }
    }
  }

  cout << abs(x - 3) + abs(y - 3) << '\n';
  return 0;
}
