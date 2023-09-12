#include <iostream>

class basket {
public:
	int N, M = 0;
	int i, j, k, tryout = 0;
	int* basket = new int[N];
	void CreateBasket();
	
};

void basket::CreateBasket() {
	std::cin >> N >> M;
	for (int p = 0; p < N; p++) {
		basket[p] = 0;
	}
}

int main() {

	basket Mybasket;

	Mybasket.CreateBasket();



	for (; tryout < M; tryout++) {
		std::cin >> i >> j >> k;
		if (i > N || j > N || k > N|| i>j) {
			std::cout << "range error" << std::endl;
		}
		else {
			// buffer = i j k
			//is ball in?
		}

	}
}

int BallNumberInside const(int* _basket) {

}