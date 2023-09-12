#include <iostream>

#include <algorithm>
#include <stdlib.h>
typedef enum {
	INPUT,
	SEQUENTLY
};

class Basket {
	int N, M, nBskNum = 0;
	int i, j, k, tryout = 0;
	void Swap(int i, int j);
	void UpDn(int i, int j);

public:
	int* basket;
	void CreateBasket();
	void PutTheBall(int how);
	void SwapBall();
	int BallNumInside(int num) const { return basket[num]; };
	void print();
	void UpsideDown();
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
	case SEQUENTLY: 
		for (; tryout < nBskNum; tryout++) {
			basket[tryout] = tryout;
		}


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

void Basket::UpsideDown() {
	for (tryout = 0; tryout < M; tryout++) {
		std::cin >> i >> j;
		UpDn(i, j);
	}
}

void Basket::UpDn(int i, int j) {
	int ntry = (j - i + 1) /2;
	for (int p=0; p < ntry; p++) {
		Swap(i +p, j-p);
	}
}





class Integer{
	int N = 0;
	int* integer;
	int vCount=0;
	int min, max = 0;
public:
	Integer();
	Integer(int numb);
	void CreateIntArray();
	void PutInt(int how);
	void PutvCount();
	int ReturnvCount() const { return vCount; };
	int findvCount();
	int lessthanvCount();
	int FindMin();
	int FindMax();
	void HomeWorkCheck();
	void BubbleSorting();
	void Swap(int i, int j);
};

Integer::Integer() {
	std::cin >> N;
	integer = new int[N];
}

Integer::Integer(int numb) {
	integer = new int[numb];
	N = numb;
}

void Integer::Swap(int i, int j) {
	int temp = 0;
	temp = integer[i];
	integer[i] = integer[j];
	integer[j] = temp;
	temp = 0;
}

void Integer::CreateIntArray() {
	std::cin >> N;
	integer = new int[N];
}

void Integer::PutInt(int how) {
	int input = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> input;
		integer[i] = input;
	}
}
int Integer::findvCount() {
	int nNumb = 0;
	for (int i = 0; i < N; i++) {
		if (integer[i] == vCount)
			nNumb++;
	}
	return nNumb;
}

int Integer::lessthanvCount() {
	int nNumb = 0;
	for (int i = 0; i < N; i++) {
		if (integer[i] < vCount)
			std::cout << integer[i] << " ";
	}
	return 0;
}

void Integer::PutvCount() {
	std::cin >> vCount;
}

int Integer::FindMin() {
	min = integer[0];
	for (int i = 0; i < N; i++) {
		if (integer[i] < min) min = integer[i];
	}
	return min;
}

int Integer::FindMax() {
	max = integer[0];
	for (int i = 0; i < N; i++) {
		if (integer[i] > max) max = integer[i];
	}
	return max;
}

void Integer::HomeWorkCheck() {

	
	
}

void Integer::BubbleSorting() {
	for (int i = 0; i < 30 - 1; i++) {

		if (integer[i] > integer[i + 1])
			Swap(i, i+1);
	}
}

int main() {
	Integer Integers(30);
	Integers.PutInt(0);
	
	std::cout << Integers.FindMin() << " " << Integers.FindMax();

}


/*

int a[100];

sort(a, a+100);

*/