#include <iostream>
#include <cstdio>

using namespace std;

//With inputs: int, long, char, float, double,
//print each element on a bew line in the order it was received
int main() {
	int a;
	long b;
	char c;
	float d;
	double e;

	scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);

	printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
	return 0;
}