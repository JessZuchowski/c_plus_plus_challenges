#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, number;

	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		cin >> number;
		arr.push_back(number);
	}
	int q, query;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> query;
		vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), query);

		if (arr[low - arr.begin()] == query)
			cout << "Yes " << (low - arr.begin() + 1) << endl;

		else
			cout << "No " << (low - arr.begin() + 1) << endl;
	}
	return 0;
}