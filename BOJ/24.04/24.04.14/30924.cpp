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

    // ���� ������ ����
    mt19937 rng(std::random_device{}());

    int maxRange = 10000;
    vector<int> numbers(maxRange);
    iota(numbers.begin(), numbers.end(), 1); // 1���� �����ϴ� ���ڷ� numbers �ʱ�ȭ

    int A = 0, B = 0, k;

    // A ã��
    shuffle(numbers.begin(), numbers.end(), rng); // ���ڸ� �������� ����
    for (int num : numbers) {
        std::cout << "? A " << num << '\n';
        std::cin >> k;
        if (k == 1) {
            A = num;
            break;
        }
    }

    // B ã��
    std::shuffle(numbers.begin(), numbers.end(), rng); // ���ڸ� �ٽ� �������� ����
    for (int num : numbers) {
        std::cout << "? B " << num << '
        std::cin >> k;
        if (k == 1) {
            B = num;
            break;
        }
    }

    // A�� B�� �� ���
    std::cout << "! " << A + B << std::endl;

    return 0;
}
