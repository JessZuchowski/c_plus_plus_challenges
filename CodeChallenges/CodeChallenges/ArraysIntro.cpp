#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[1001], n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i * 2 < n; i++) {
		int a = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = a;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}