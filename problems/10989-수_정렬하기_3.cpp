#include <iostream>
using namespace std;

int main() {
	int N;
	int num;
	cin >> N;
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int* arr = new int[10000];
	int max_num = 0;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (max_num < num)
			max_num = num;
		arr[num - 1] += 1;
	}

	for (int i = 0; i < max_num + 1; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i + 1 << "\n";
		}
	}
	return 0;
}