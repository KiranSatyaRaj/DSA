#include <bits/stdc++.h>

using namespace std;

// find total height of water trapped in rainfall b/w pillars

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int prefixMax[n];
  prefixMax[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefixMax[i] = max(prefixMax[i-1], arr[i]);
  }

  int suffixMax[n];
  suffixMax[n-1] = arr[n-1];
  for (int i = n-2; i >= 0; i--) {
    suffixMax[i] = max(suffixMax[i+1], arr[i]);
  }

  int total = 0;

  for (int i = 1; i < n-1; i++) {
    if (arr[i] >= prefixMax[i-1] || arr[i] >= suffixMax[i+1]) continue;
    else {
      int trapped = min(prefixMax[i-1], suffixMax[i+1]) - arr[i];
      total += trapped;
    }
  }
  
  cout << total << '\n';
  return 0;
}
