#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//Read 3 numbers from stdin and print their sum to stdout
int main() {
	//declare variables
	int a, b, c, d;

	//read input using cin
	cin >> a >> b >> c;

	//sum
	d = a + b + c;

	//print using cout
	cout << d << endl;

	return 0;
}