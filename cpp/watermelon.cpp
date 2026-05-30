#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int w;
	cin >> w;
	
	if (w >= 4 && w % 2 == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}
