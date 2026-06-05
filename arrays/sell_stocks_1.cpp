#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int pMin[n], sMax[n];
  pMin[0] = arr[0];
  for (int i = 1; i < n; i++)
    pMin[i] = min(pMin[i-1], arr[i]);

  sMax[n-1] = arr[n-1];
  for (int i = n-2; i >= 0; i--)
    sMax[i] = max(sMax[i+1], arr[i]);

  int maxProfit = 0;
  for (int i = 0; i < n-1; i++)
    maxProfit = max(sMax[i+1] - pMin[i], maxProfit);

  cout << maxProfit << '\n';
  return 0;
}
