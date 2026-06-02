#include <bits/stdc++.h>

using namespace std;

int main() {
  unordered_set<int> st;
  st = {1, 1, 3, 4, 4, 2};

  unordered_set<int> st2(st);
  st2.insert(8);

  for (auto it = st.begin(); it != st.end(); ++it) {
    cout << *it << " ";
  }
  cout << '\n';

  st2.erase(1);

  if (st2.find(1) == st2.end()) {
    cout << "Element not found in set" << '\n';
  }

  return 0;
}
