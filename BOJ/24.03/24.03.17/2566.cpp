#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int arr[10][10] = {};

	fill(&arr[0][0], &arr[9][10], INT_MIN);


	for (int i = 1; i < 10; i++)
		for (int j = 1; j < 10; j++)
			cin >> arr[i][j];
	
	cout << *max_element(&arr[1][1], &arr[9][10]) << '\n';
	cout << (max_element(&arr[1][1], &arr[9][10]) - &arr[0][0]) / 10 << ' ' << (max_element(&arr[1][1], &arr[9][10]) - &arr[0][0]) % 10 << '\n';


}