#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n,
		arr[100][100],
		sum1 = 0,
		sum2 = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (i == j) sum1 += arr[i][j];
			if (i + j == n - 1) sum2 += arr[i][j];
		}
	}
	cout << abs(sum1 - sum2) << endl;
	return 0;
}