#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  int maxIdx = arr.size() -1;
  int numChunks = 0;

  vector<int> prefixMax(n);
  vector<int> suffixMin(n);
  prefixMax[0] = arr[0];

  for (int i = 1; i < n; i++) {
    if (prefixMax[i-1] > arr[i] ) prefixMax[i] = prefixMax[i-1];
    else prefixMax[i] = arr[i];
  }

  suffixMin[n-1] = arr[n-1];

  for (int i = n-2; i >= 0; i--) {
    if (suffixMin[i+1] < arr[i]) suffixMin[i] = suffixMin[i+1];
    else suffixMin[i] = arr[i];
  }

  for (int i = 0; i < n-1; i++) {
    if (prefixMax[i] < suffixMin[i+1]) numChunks++;
  }

  numChunks++;

  cout << numChunks << '\n';

  return EXIT_SUCCESS;
}
