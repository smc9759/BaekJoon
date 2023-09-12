#include <iostream>

typedef enum {
	INPUT,
	SEQUENTLY
};

class Basket {
	int N, M = 0;
	int i, j, k, tryout = 0;

public:
	int* basket;
	void CreateBasket();
	void PutTheBall(int how);
	int BallNumInside(int num) const { return basket[num]; };
	void print();
};

void Basket::CreateBasket() {
	std::cin >> N >> M;
	basket = new int[N];
	for (int p = 0; p < N; p++) {
		basket[p] = 0;
	}
}

void Basket::PutTheBall(int how) {
	for (; tryout < M; tryout++) {
		std::cin >> i >> j >> k;

		if (i > N || j > N || k > N || i > j) {
			std::cout << "range error" << std::endl;
		}
		else {
			for (; i <= j; i++) 
				basket[i - 1 ] = k;
		}
	}
}

//print the ball
void Basket::print() {
	for (int p = 0; p < N; p++)
		std::cout << basket[p] << " ";
}

int main() {

	Basket Mybasket;

	Mybasket.CreateBasket();

	Mybasket.PutTheBall();

	Mybasket.print();

}


