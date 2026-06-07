#include <bits/stdc++.h>

using namespace std;

int main() {
  // print freq(x) in subarray of size k

  int n, k, x;
  cin >> n >> k >> x;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int freq = 0;
  for (int i = 0; i < k; i++)
    if (arr[i] == x) freq++;
  cout << freq << " ";

  for (int i = k; i < n; i++) {
    if (arr[i-k] == x) freq--;
    if (arr[i] == x) freq++;
    cout << freq << " ";
  }
  cout << '\n';

  return 0;
}
