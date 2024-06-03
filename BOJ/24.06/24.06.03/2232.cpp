#include <iostream>
#include <vector>

int N;
std::vector <int> Get;

void MakeGet() {
    std::cin >> N;
    Get.push_back(0);
    for (int i = 1; i <= N; i++) {
        int X;
        std::cin >> X;
        Get.push_back(X);
    }
    Get.push_back(0);
}

void Solve() {
    for (int i = 1; i <= N; i++) {
        if (Get[i] >= Get[i - 1] && Get[i] >= Get[i + 1]) std::cout << i << "\n";
    }
}

int main() {
    MakeGet();
    Solve();
}