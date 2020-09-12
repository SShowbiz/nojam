#include <iostream>
using namespace std;

int main() {
	int H;
	int M;
	cin >> H >> M;
	M -= 45;
	if (M < 0)
		H -= 1;
	if (H < 0)
		H += 24;
	if (M < 0)
		M += 60;
	cout << H << " " << M;
	return 0;
}