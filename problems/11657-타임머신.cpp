// Bellman Ford Algorithm
#include <limits.h>
#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main() {
	int N;
	int M;
	int first_city;
	int second_city;
	int time;
	cin >> N >> M;
	long long** distance = new long long*[M];
	for (int i = 0; i < M; i++) {
		distance[i] = new long long[3];
	}
	for (int i = 0; i < M; i++) {
		cin >> first_city >> second_city >> time;
		distance[i][0] = first_city - 1;
		distance[i][1] = second_city - 1;
		distance[i][2] = time;
	}

	long long* min_distance = new long long[N];
	fill_n(min_distance, N, INT_MAX);

	min_distance[0] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (min_distance[distance[j][0]] != INT_MAX &&
				min_distance[distance[j][1]] > min_distance[distance[j][0]] + distance[j][2]) {
				if (i == N - 1) {
					cout << -1;
					return 0;
				}
				min_distance[distance[j][1]] = min_distance[distance[j][0]] + distance[j][2];
			}
		}
	}

	for (int i = 1; i < N; i++) {
		long long time = min_distance[i] == INT_MAX ? -1 : min_distance[i];
		cout << time << "\n";
	}
	return 0;
}