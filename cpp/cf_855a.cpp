#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  unordered_set<string> st;
  int ans[n];
  
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    if (st.find(name) == st.end()) {
      st.insert(name);
      ans[i] = 0;
    } else {
      ans[i] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    if (ans[i] == 0) cout << "NO" << '\n';
    else cout << "YES" << '\n';
  }

  return EXIT_SUCCESS;
}
