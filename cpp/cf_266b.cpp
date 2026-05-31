#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, t;
  string q;
  cin >> n >> t;
  cin.ignore();
  cin >> q;
  string temp;
  for (int i = 0; i < t; i++) {
    temp = q;
    for (int j = 0; j < q.length()-1; j++) {
      if (temp[j] == 'B' && temp[j+1] == 'G') {
        q[j] = 'G';
        q[j+1] = 'B';
      }
    }
  }

  cout << q << '\n';
}
