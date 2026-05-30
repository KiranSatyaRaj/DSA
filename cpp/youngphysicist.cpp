#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int x = 0, y = 0, z = 0;
	
	while (n--) {
		int i, j, k;
		cin >> i >> j >> k;
		x += i;
		y += j;
		z += k;
	}
	
	if (x == 0 && y == 0 && z == 0) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}
