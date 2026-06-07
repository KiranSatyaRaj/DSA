#include <bits/stdc++.h>

using namespace std;

int main() {
  // print sum of subarray of size k

  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++) 
    cin >> arr[i];

  int sum = 0;
  for (int i = 0; i < k; i++)
    sum += arr[i];
  cout << sum << " ";

  for (int i = k; i < n; i++) {
    sum += arr[i];
    sum -= arr[i-k];
    cout << sum << " ";
  }
  cout << '\n';

  return 0;
}
