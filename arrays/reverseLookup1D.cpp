#include <bits/stdc++.h>

using namespace std;

int main() {
  // find sum of all subarrays
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += ((i+1) * (n-i) * arr[i]);
  }

  cout << sum << '\n';
}
