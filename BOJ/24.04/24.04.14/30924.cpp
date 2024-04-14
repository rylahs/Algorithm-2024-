#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <numeric>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 난수 생성기 설정
    mt19937 rng(std::random_device{}());

    int maxRange = 10000;
    vector<int> numbers(maxRange);
    iota(numbers.begin(), numbers.end(), 1); // 1부터 시작하는 숫자로 numbers 초기화

    int A = 0, B = 0, k;

    // A 찾기
    shuffle(numbers.begin(), numbers.end(), rng); // 숫자를 무작위로 섞음
    for (int num : numbers) {
        std::cout << "? A " << num << '\n';
        std::cin >> k;
        if (k == 1) {
            A = num;
            break;
        }
    }

    // B 찾기
    std::shuffle(numbers.begin(), numbers.end(), rng); // 숫자를 다시 무작위로 섞음
    for (int num : numbers) {
        std::cout << "? B " << num << '
        std::cin >> k;
        if (k == 1) {
            B = num;
            break;
        }
    }

    // A와 B의 합 출력
    std::cout << "! " << A + B << std::endl;

    return 0;
}
