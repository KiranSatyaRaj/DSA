#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    set<int, greater<int>> st;

    while (n--) {
      int num;
      cin >> num;
      if (num % 2 == 0) {
        st.insert(num);
      }
    }
    int count = 0;
    while (true) {
      if (st.empty()) break;
      auto it = st.begin();
      int num = *it / 2;

      if (num % 2 == 0) {
        st.insert(num);
      }
      st.erase(*it);
      count++;
    }
    cout <<count << '\n';
  }

}
