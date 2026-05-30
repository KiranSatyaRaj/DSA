#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> v;
  while(n--) {
    int num;
    cin >> num;
    v.push_back(num);
  }

  int minIdx = -1, maxIdx = -1;
  int min = INT_MAX, max = INT_MIN;

  for (int i = 0; i < v.size(); i++) {
    if (v.at(i) > max) {
      maxIdx = i;
      max = v.at(i);
    }

    if (v.at(v.size() -i -1) < min) {
      minIdx = v.size() -i -1;
      min = v.at(v.size() -i -1);
    }

  }
  if (maxIdx <= minIdx) {
    cout << maxIdx + (v.size() -1 - minIdx);
  } else {
    cout << maxIdx + (v.size() -1 -minIdx) -1;
  }
  return 0;
}
