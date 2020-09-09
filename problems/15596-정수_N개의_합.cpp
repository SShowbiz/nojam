#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a) {
	long long totalSum = 0;
	for (int i = 0; i < a.size(); i++) {
		totalSum += a[i];
	}
	return totalSum;
}