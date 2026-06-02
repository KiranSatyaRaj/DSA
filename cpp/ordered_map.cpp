#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int,int> mp;
  mp.insert({11,2});
  mp.insert({3, 4});

  for (auto it = mp.begin(); it != mp.end(); ++it) {
    cout << it->first << " " << it->second << '\n';
  }

  map<int, int> mp1(mp.begin(), mp.end()); // alt: mp1(mp)
  mp1.insert({94, 24});
  for (auto it = mp1.begin(); it != mp1.end(); ++it) {
    cout << it->first << " " << it->second << '\n';
  }
  mp1.erase(mp1.find(94));
  if (mp1.find(94) == mp1.end()) {
    cout << "key not found" << '\n';
  }
  return 0;
}
