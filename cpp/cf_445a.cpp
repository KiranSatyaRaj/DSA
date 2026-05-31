#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  cin.ignore();  
  char board[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
    }
    cin.ignore();
  }

  for (int i = 0; i < n; i++) {
    bool b = (i % 2 == 0);
    for (int j = 0; j < m; j++) {
      if (board[i][j] == '.') {
        if (b) {
          if (j % 2 == 0) board[i][j] = 'B';
          else board[i][j] = 'W';
        } else {
          if (j % 2 != 0) board[i][j] = 'B';
          else board[i][j] = 'W';
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << board[i][j];
    }
    cout << '\n';
  }

  return 0;
}
