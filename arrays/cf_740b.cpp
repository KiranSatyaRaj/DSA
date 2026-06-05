#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i= 0; i < n; i++) 
    cin >> arr[i];

  int pSum[n];
  pSum[0] = arr[0];
  for (int i = 1; i < n; i++)
    pSum[i] = pSum[i-1] + arr[i];
  
  int segSum[m];
  for (int i = 0; i < m; i++) {
    int m1, m2;
    cin >> m1 >> m2;
    int sum = pSum[m2-1];
    if (m1-1 > 0) sum -= pSum[m1-2];
    segSum[i] = sum;
  }

  int total = 0;

  for (int sum: segSum)
    if (sum > 0) total += sum;

  cout << total << '\n';

  return 0;
}
