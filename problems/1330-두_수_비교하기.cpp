#include <iostream>
#include <string>
using namespace std;

int main() {
	int A;
	int B;
	cin >> A >> B;
	string answer;
	if (A > B)
		answer = ">";
	if (A < B)
		answer = "<";
	if (A == B)
		answer = "==";
	cout << answer;
	return 0;
}