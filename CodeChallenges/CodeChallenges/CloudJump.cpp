#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n,
		clouds[101],
		count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) cin >> clouds[i];
	for (int j = 1; j < n; count++) {
		if (clouds[j + 1] != 1 && j < n - 1) j += 2;
		else j++;
	}

	cout << count << endl;
	return 0;
}