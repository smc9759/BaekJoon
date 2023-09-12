#include <iostream>

class Basket {
	int N, M = 0;
	int i, j, k, tryout = 0;

public:
	int* basket = new int[N];
	void CreateBasket();
	void PutTheBall();
	int BallNumInside(const Basket& _basket);
};

void Basket::CreateBasket() {
	std::cin >> N >> M;
	for (int p = 0; p < N; p++) {
		basket[p] = 0;
	}
}

void Basket::PutTheBall() {
	for (; tryout < M; tryout++) {
		std::cin >> i >> j >> k;
		if (i > N || j > N || k > N || i>j) {
			std::cout << "range error" << std::endl;
		}
		else {
			// buffer = i j k
			//is ball in?
		}

	}
}

int BallNumInside(const Basket& _basket) {

}
int main() {

	Basket Mybasket;

	Mybasket.CreateBasket();




}


}