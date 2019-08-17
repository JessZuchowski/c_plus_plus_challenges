#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int array[102] = {};
	
	for (int i = 0; i < n; i++) {
		int color;
		cin >> color;
		array[color] ++;
	}

	int pairs = 0;
	for (int i = 0; i <= 100; i++) {
		pairs += array[i] / 2;
	}

	cout << pairs << endl;
	return 0;
}