#include <iostream>
using namespace std;
int nextNumber(int number) {
	int next = number;
	while (number != 0) {
		next += number % 10;
		number /= 10;
	}
	return next;
}

int main() {
	bool* isSelfNumber = new bool[10000];
	fill_n(isSelfNumber, 10000, true);
	for (int i = 0; i < 10000; i++) {
		if (nextNumber(i + 1) != i + 1 && nextNumber(i + 1) < 10001) {
			isSelfNumber[nextNumber(i + 1) - 1] = false;
		}
	}
	for (int i = 0; i < 10000; i++) {
		if (isSelfNumber[i]) {
			cout << i + 1 << "\n";
		}
	}
	return 0;
}