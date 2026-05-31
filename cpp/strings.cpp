#include <bits/stdc++.h>

using namespace std;

int main() {
  // declaration & init: string varName = value;
  string s = "abc";
  s[0] = 'd';
  cout << s << '\n';

  // iterators in string;
  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it;
  }
  cout << '\n';

  for (auto it = s.rbegin(); it != s.rend(); ++it) {
    cout << *it;
  }
  cout << '\n';
  
  cout << s.length() << '\n';

  s += 'd'; // O(1): appending a char
  cout << s << endl;
  
  s = s + "a"; // O(n): concatenation of resultant string
  cout << s << endl;

  s.pop_back();
  cout << s << endl;
  s.push_back('g');
  cout << s << endl;

  reverse(s.begin(), s.end());
  cout << s << endl;

  sort(s.begin(), s.end());
  cout << s << endl;

  s += "ching";
  cout << s << endl;
  return 0;
}
