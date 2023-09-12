#include <iostream>

typedef enum {
	INPUT,
	SEQUENTLY
};

class Basket {
	int N, M, nBskNum = 0;
	int i, j, k, tryout = 0;
	void Swap(int i, int j);

public:
	int* basket;
	void CreateBasket();
	void PutTheBall(int how);
	void SwapBall();
	int BallNumInside(int num) const { return basket[num]; };
	void print();
};

void Basket::CreateBasket() {
	std::cin >> N >> M;
	nBskNum = N + 1;
	basket = new int[nBskNum];
	for (int p = 0; p < nBskNum; p++) {
		basket[p] = 0;
	}
}

void Basket::PutTheBall(int how) {

	switch (how)
	{
	case INPUT: 
		for (; tryout < M; tryout++) {
			std::cin >> i >> j >> k;

			if (i > nBskNum || j > nBskNum || k > nBskNum || i > j) {
				std::cout << "range error" << std::endl;
			}
			else {
				for (; i <= j; i++)
					basket[i] = k;
			}
		}
		break;
	case SEQUENTLY: // n4 nBskNum5 0123
		for (; tryout < nBskNum; tryout++) {
			basket[tryout] = tryout;
		}
		SwapBall();

		break;

	}

}
 
//print the ball
void Basket::print() {
	for (int p = 1; p < nBskNum; p++)
		std::cout << basket[p] << " ";
}

void Basket::SwapBall() {
	for (tryout = 0; tryout < M; tryout++) {
		std::cin >> i >> j;
		Swap(i, j);
	}
}

void Basket::Swap(int i, int j) {
	int temp = 0;
	temp = basket[i];
	basket[i] = basket[j];
	basket[j] = temp;
	temp = 0;
}


int main() {

	Basket Mybasket;

	Mybasket.CreateBasket();

	Mybasket.PutTheBall(SEQUENTLY);

	Mybasket.print();

}


