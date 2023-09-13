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
	void BubbleSorting(int n);
	void Swap(int i, int j);
	void print();
	int missingHomework[2];
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
	int student_count = 0;

	BubbleSorting(N);
	//now n = 28
	for (int i = 0; i < N-1; i++) {
		if (integer[i] - integer[i + 1] != 1)
		{
			missingHomework[student_count] = integer[i+1]+1;
			student_count++;
		}
	}
	std::cout << missingHomework[1] << std::endl;
	std::cout << missingHomework[0] << std::endl;
}

void Integer::BubbleSorting(int n) {
	int i, j, temp;

	for (i = n - 1; i>0; i--) {
		// 0 ~ (i-1)까지 반복
		for (j = 0; j<i; j++) {
			// j번째와 j+1번째의 요소가 크기 순이 아니면 교환
			if (integer[j] < integer[j + 1]) {
				temp = integer[j];
				integer[j] = integer[j + 1];
				integer[j + 1] = temp;
			}
		}
	}
}

void Integer::print() {
	for (int i = 0; i < N; i++) {
		std::cout << integer[i] << " ";
	}
}

int main() {
	Integer Integers(30-2);
	Integers.PutInt(0);
	Integers.HomeWorkCheck();
	//숙제 안낸사람이 이어서 있으면 못찾음

	//std::cout << Integers.FindMin() << " " << Integers.FindMax();

}


/*

int main() {
int A[30] = { 0, };
int index_submit = 0;
for (int i = 0; i < 28; i++)
{
cin >> index_submit;
A[index_submit-1] = 1;
}

int* no_homework = new int[2];
int count = 0;
for (int i = 0; i < 30; i++)
{
if (A[i] == 0)
{
no_homework[count++] = i+1;
}
}

cout << no_homework[0] << '\n' << no_homework[1];
//하나씩 가다가 빠진거 저장
//-> 배열 인덱스로 접근해서 flag를 켜줌
return 0;
}

*/