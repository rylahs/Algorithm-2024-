#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T; 


    int extraTimeOption1 = max(0, T - 30); 
    int totalCostOption1 = a + (21 * extraTimeOption1 * x); 

    // �ɼ� 2�� ���� ���
    int extraTimeOption2 = max(0, T - 45); 
    int totalCostOption2 = b + (21 * extraTimeOption2 * y); 

    // ��� ���
    cout << totalCostOption1 << " " << totalCostOption2 << '\n';

	return 0;
}