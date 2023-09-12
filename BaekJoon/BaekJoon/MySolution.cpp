#include <iostream>

class Basket {
	int N, M = 0;
	int i, j, k, tryout = 0;

public:
	int* basket = new int[N];
	void CreateBasket();
	void PutTheBall(Basket& _basket);
	int BallNumInside(int num) const { return basket[num]; };
	void print();
};

void Basket::CreateBasket() {
	std::cin >> N >> M;
	for (int p = 0; p < N; p++) {
		basket[p] = 0;
	}
}

void Basket::PutTheBall(Basket& _basket) {
	for (; tryout < M; tryout++) {
		std::cin >> i >> j >> k;
		if (i > N || j > N || k > N || i>j) {
			std::cout << "range error" << std::endl;
		}
		else {
			// buffer = i j k
			//is ball in?
			for (; i < j; i++) {
				//if (!_basket.BallNumInside[i]) {
				//	//공이 들어있으면

				//}
				_basket.basket[i] = k;
			}
		}
	}
}

//print the ball
void Basket::print() {
	for (int p = 0; p < N; p++)
		std::cout << basket[p];
}
int main() {

	Basket Mybasket;

	Mybasket.CreateBasket();

	Mybasket.PutTheBall(Mybasket);

	Mybasket.print();

}


