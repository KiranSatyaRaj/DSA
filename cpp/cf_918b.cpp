#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  cin.ignore();

  unordered_map<string, string> serverip;
  pair<string, string> cmdip[m];
  while (n--) {
    string server, ip;
    cin >> server >> ip;
    serverip.insert({ip, server});
    cin.ignore();
  }

  for (int i = 0; i < m; i++) {
    string cmd, ip;
    cin >> cmd >> ip;
    ip.pop_back();
    cmdip[i] = make_pair(cmd, ip);
    cin.ignore();
  }

  for (int i = 0; i < m; i++) {
    cout << cmdip[i].first << " " << cmdip[i].second << "; #" << serverip[cmdip[i].second] << '\n';
  }

  return 0;
}
