#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> arr[n];
	int i, j, value;
	for (int k = 0; k < n; k++) {
		int count;
		cin >> count;
		arr[k].push_back(count);
		for (int l = 1; l <= count; l++) {
			cin >> value;
			arr[k].push_back(value);
		}
	}
	for (int k = 0; k < q; k++) {
		cin >> i >> j;
		cout << arr[i][j + 1] << "\n";
	}
	return 0;
}