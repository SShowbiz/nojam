#include <cmath>
#include <iostream>
using namespace std;
bool isHanNumber(int number) {
	if (number < 100)
		return true;
	int change = (number / 10) % 10 - number % 10;
	int index = 0;
	while (number / (int)pow(10, index + 1) != 0) {
		if ((number / (int)pow(10, index + 1)) % 10 - (number / (int)pow(10, index)) % 10 !=
			change) {
			return false;
		}
		index += 1;
	}
	return true;
}

int main() {
	int N;
	cin >> N;
	int number = 0;
	for (int i = 1; i <= N; i++) {
		if (isHanNumber(i))
			number += 1;
	}
	cout << number;
	return 0;
}