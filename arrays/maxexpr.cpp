#include <bits/stdc++.h>

using namespace std;

// maximize the expression: p * arr[i] + q * arr[j] + r * arr[k]
// where i < j < k

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int arr[n];
  int p,q, r;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cin >> p >> q >> r;

  // compute prefixMax of p*arr[i];
  int prefixMax[n];
  prefixMax[0] = p*arr[0];
  for (int i = 1; i < n; i++) {
    prefixMax[i] = max(prefixMax[i-1], p*arr[i]);
  }

  // compute suffixMax of r*arr[k];
  int suffixMax[n];
  suffixMax[n-1] = r*arr[n-1];
  for (int i = n-2; i >= 0; i--) {
    suffixMax[i] = max(suffixMax[i+1], r*arr[i]);
  }

  // iterate through 1 to n-2 for q*arr[j]
  // with prefixMax and suffixMax on the adjacent indexes
  int maxVal = INT_MIN;
  for (int i = 1; i < n-1; i++) {
    maxVal = max(maxVal, prefixMax[i-1] + q*arr[i] + suffixMax[i+1]);
  }

  cout << maxVal << '\n';

  return 0;
}
