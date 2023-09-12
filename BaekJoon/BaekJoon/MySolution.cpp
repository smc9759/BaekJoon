#include <iostream>

int main() {

	//int* basket[N];
	//바구니 == 배열


	int N, M = 0;
	int i, j, k, tryout = 0;
	//1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)
	std::cin >> N >> M;
	char** basket = new char*[N];
	for (int p = 0; p < N; p++) {
		basket[p] = new char[N];
	}
	for (int p = 0; p < N; p++) {
		for (int r = 0; r < N; r++) {
			basket[p][r] = 0;
		}
	}
	for (; tryout < M; tryout++) {
		std::cin >> i >> j >> k;
		if (i > N || j > N || k > N) {
			std::cout << "range error" << std::endl;
		}
		else {
			// buffer = i j k
		}

	}
}