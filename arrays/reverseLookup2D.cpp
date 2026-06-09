#include <bits/stdc++.h>

using namespace std;

int main() {
  // sum of all submatrices of matrix nxn
  int n;
  cin >> n;
  int arr[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  int sum = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) 
      sum += arr[i][j] * (i+1) * (j+1) * (n-i) * (n-j);
  
  cout << sum << '\n';
  return 0;
}
