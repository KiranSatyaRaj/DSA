#include <bits/stdc++.h>

using namespace std;

int main() {
  // declaring unordered_map
  // syntax: unordered_map<dType, dType> mp;
  unordered_map<int, int> mp;
  mp = {{1, 2}, {2, 4}, {3, 6}};
  cout << mp[2] << endl;
  unordered_map<int, int> mp1(mp); // copies mp to mp1
  
  for(auto it = mp1.begin(); it != mp1.end(); ++it) {
    cout << it->first << " " << it->second << '\n';
  }

  mp.erase(2);
  if (mp.find(2) == mp.end()) {
    cout << "key not found" << '\n';
  }

  mp.insert({90, 10});
  cout << mp.find(90)->second << '\n';

  return 0;
}
