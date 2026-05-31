#include <bits/stdc++.h>

using namespace std;

int main() {
  // syntax for declaring pairs
  // Pair<d1, d2> p;
  // here d1 & d2 can be same 
  // or different data types

  pair<int, int> p1;
  pair<int, string> p2 = {3, "spike"};
  cout << p2.first << " " << p2.second << endl;
  
  p2 = make_pair(24, "jet");
  cout << p2.first << " " << p2.second << endl;

  pair<pair<int, char>, string> p3 = {{4, 'K'}, "ein"};

  cout << p3.first.first << " " << p3.first.second << " " << p3.second << '\n';
  return 0;
}
