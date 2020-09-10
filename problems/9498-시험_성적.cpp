#include <iostream>
#include <string>
using namespace std;

int main() {
	int score;
	cin >> score;
	string alphabet;
	if (score >= 90)
		alphabet = "A";
	else if (score >= 80)
		alphabet = "B";
	else if (score >= 70)
		alphabet = "C";
	else if (score >= 60)
		alphabet = "D";
	else
		alphabet = 'F';
	cout << alphabet;
	return 0;
}