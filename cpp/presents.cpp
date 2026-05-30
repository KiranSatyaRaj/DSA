#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin.tie(NULL);

  vector<int> vec;
  int n;
  cin >> n;
  while (n--) {
    int num;
    cin >> num;
    vec.push_back(num-1);
  }
  vector<int> ans(vec.size());

  for(int i = 0; i < ans.size(); i++) {
    ans[vec[i]] = i+1;
  }

  for (int num : ans) {
    cout << num << " ";
  }
  cout << '\n';
  return 0;
}
