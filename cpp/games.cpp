#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  vector<pair<int, int>> tunf;
  while (n--) {
    int n1, n2;
    cin >> n1 >> n2;
    tunf.push_back(make_pair(n1, n2));
  }

  int change = 0;
  for (int i = 0; i < tunf.size()-1; i++) {
    for (int j = i+1; j < tunf.size(); j++) {
      if (tunf[i].second == tunf[j].first) change++;
      if (tunf[j].second == tunf[i].first) change++;
    }
  }

  cout << change << '\n';
  return 0;
}
