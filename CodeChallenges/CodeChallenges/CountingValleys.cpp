#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n,
		steps = 0,
		valleys = 0;
	char c;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;

		if (c == 'U') steps++;
		else steps--;

		if (steps == 0 && c == 'U') valleys++;
	}

	cout << valleys << endl;
	return 0;
}