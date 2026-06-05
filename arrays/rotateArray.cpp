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
  
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin()+k);
  reverse(arr.begin()+k, arr.end());

  for (long num : arr) cout << num << " ";
  cout << '\n';

  return 0;
}
