#include <bits/stdc++.h>

using namespace std;

int main() {
  // given a matrix of size nxn 
  // and queries q of 4 ints: i1, j1, i2, j2
  // where i2 >= i1 and j2 >= j1
  int n, q; 
  cin >> n >> q;
  int arr[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  int pSum [n][n];
  for (int i = 0; i < n; i++) {
    pSum[i][0] = arr[i][0];
    for (int j = 1; j < n; j++) {
      pSum[i][j] = pSum[i][j-1] + arr[i][j];
    }
  }

  int sum = 0;

  // this takes O(N) to compute sum => overall O(N^2 + q * N)
  // compute column wise prefixSum
  /*
  while (q--) {
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    for (int i = i1; i <=i2; i++) {
      sum += pSum[i][j2];
      if (j1-1 >= 0) sum -= pSum[i][j1-1];
    }
  }
  */

  // O (N^2 + q)
  // O(1) for computing the sum
  for (int i = 0; i < n; i++)
    for (int j = 1; j < n; j++)
      pSum[j][i] += pSum[j-1][i];

  while (q--) {
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    sum = pSum[i2][j2];
    if (j1-1 >= 0) sum -= pSum[i2][j1-1];
    if (i1-1 >= 0) sum -= pSum[i1-1][j2];
    if (i1-1 >= 0 && j1-1 >= 0) sum += pSum[i1-1][j1-1];
    cout << sum << '\n';
  }

  return 0;
}
