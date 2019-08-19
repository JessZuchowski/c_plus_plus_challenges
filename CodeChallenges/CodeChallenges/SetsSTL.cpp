#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	int q;
	cin >> q;
	set<int> s;

	for (int i = 0; i < q; i++) {
		int x, y;
		cin >> y >> x;

		if (y == 1) {
			s.insert(x);
		}
		else if (y == 2) {
			s.erase(x);
		}
		else {
			if (s.end() == s.find(x)) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}
	}
	return 0;
}