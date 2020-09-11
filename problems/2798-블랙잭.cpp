#include <limits.h>
#include <iostream>
using namespace std;

int main() {
	int N;
	int M;
	cin >> N >> M;

	int* cardArray = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> cardArray[i];
	}
	int maxSum = INT_MIN;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (maxSum < cardArray[i] + cardArray[j] + cardArray[k] &&
					cardArray[i] + cardArray[j] + cardArray[k] <= M)
					maxSum = cardArray[i] + cardArray[j] + cardArray[k];
				if (maxSum == M) {
					cout << maxSum;
					return 0;
				}
			}
		}
	}
	cout << maxSum;
	return 0;
}