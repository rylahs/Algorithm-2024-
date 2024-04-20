#include <iostream>
#include <vector>
using namespace std;

int calculateGrade(double P) {
    if (0 <= P && P <= 4) return 1;
    else if (4 < P && P <= 11) return 2;
    else if (11 < P && P <= 23) return 3;
    else if (23 < P && P <= 40) return 4;
    else if (40 < P && P <= 60) return 5;
    else if (60 < P && P <= 77) return 6;
    else if (77 < P && P <= 89) return 7;
    else if (89 < P && P <= 96) return 8;
    else return 9;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N, K;
    cin >> N >> K;

    vector<int> G(K), D(K);
    for (int i = 0; i < K; i++) 
        cin >> G[i];
    

    for (int i = 0; i < K; i++)
    {
        int p = G[i] * 100 / N;
    
        D[i] = calculateGrade(p);
    }

    for (auto& e : D)
        cout << e << ' ';

    return 0;
}