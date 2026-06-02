#include <bits/stdc++.h>

using namespace std;

int main() { 
  set<int> st = {1, 4, 4, 2, 2, 3, 3, 3};

  set<int> st1(st);
  set<int> st2(st.begin(), st.end());
  st2.insert(6);
  st2.insert(8);
  st2.insert(6);
  st2.insert(9);

  for (auto it = st2.begin(); it != st2.end(); ++it) {
    cout << *it << " ";
  }
  cout << '\n';
  
  // if value goes beyond the range then we get the index position from where the function fell off from end
  auto it = lower_bound(st2.begin(), st2.end(), -1); // this returns pointer to the value greater than or equal to the value
  cout << *it << '\n';
  it = upper_bound(st2.begin(), st2.end(), -1); // returns pointer to the value strictly greater 
  cout << *it << '\n';
  
  return 0;
}
