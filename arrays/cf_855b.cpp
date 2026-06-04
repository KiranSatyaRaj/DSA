#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long n;
  long long  p, q, r;
  cin >> n >> p >> q >> r;
  long long arr[n], pMax[n], sMax[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  pMax[0] = p * arr[0];
  for (long i = 1; i < n; i++) pMax[i] = max(pMax[i-1], p*arr[i]);

  sMax[n-1] = r * arr[n-1];
  for (long i = n-2; i >= 0; i--) sMax[i] = max(sMax[i+1], r*arr[i]);

  long long maxexp = LLONG_MIN;
  for (long i = 0; i < n; i++) maxexp = max(pMax[i] + q*arr[i] + sMax[i], maxexp);
  for (long i = 1; i < n-1; i++) maxexp = max(pMax[i-1] + q*arr[i] + sMax[i+1], maxexp);
  cout << maxexp << '\n';

  return 0;
}
