#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str, bomb;
	cin >> str >> bomb;

	string stack;
	int bombSize = bomb.size();

	for (char ch : str)
	{
		stack.push_back(ch);
		if (stack.size() >= bombSize && stack.back() == bomb.back())
		{
			bool isBomb = true;
			for (int i = 0; i < bombSize; i++)
			{
				if (stack[stack.size() - bombSize + i] != bomb[i])
				{
					isBomb = false;
					break;
				}
			}

			if (isBomb)
				stack.resize(stack.size() - bombSize);
		}
	}

	if (stack.empty())
		cout << "FRULA\n";
	else
		cout << stack << '\n';

	return 0;
}