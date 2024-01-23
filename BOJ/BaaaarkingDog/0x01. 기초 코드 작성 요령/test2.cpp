#include <bits/stdc++.h>

using namespace std;

void func1() {
	// 128번에 거쳐 hi를 출력 하는 함수 (OverFlow)
	for (char s = 0; s < 128; s++) {
		cout << "hi " << s << "\n";
	}
}

int func2() {
	// 50!를 61로 나눈 나머지를 반환하는 함수
	int r = 1;
	for (int i = 1; i <= 50; i++) {
		r = r * i % 61;
	}
	return r;
}
int func3() {
	// Overflow
	// 10의 10 거듭제곱을 1000000007로 나눈 나머지를 반환하는 함수
	int a = 10;
	int mod = 1000000007;

	for (int i = 0; i < 10; i++)
		a = 10 * a % mod;
		//a = 10ll * a % mod;

	return a;
	
}
int main(void)
{

	int r = func2();
	cout << r << "\n";

	int k = func3();
	cout << k << "\n";
}