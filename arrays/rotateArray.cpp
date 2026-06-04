#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int k;
  cin >> k;
  k %= n;
  vector<int> temp(n);
  for (int i = 0; i < k; i++) temp[i] = arr[n-k+i];
  for (int i = 0; i < n-k; i++) temp[k + i] = arr[i];

  for (long num : temp) cout << num << " ";
  cout << '\n';

  return 0;
}
