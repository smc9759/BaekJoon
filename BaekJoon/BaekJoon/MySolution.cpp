#include <iostream>

int main() {
	int N = 0;
	std::cin >> N;
	N = N / 4;
	for (int i = 0; i < N; i++) {
		std::cout << "long ";
	}
	std::cout << "int";
}