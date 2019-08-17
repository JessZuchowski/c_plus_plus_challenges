#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	long long int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		long long int a;
		cin >> a;
		sum += a;
	}
	cout << sum << endl;
	return 0;
}