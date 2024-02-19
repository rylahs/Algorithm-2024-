#include <bits/stdc++.h>
using namespace std;

int board[502][502];


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	int maxScore = INT_MIN;
	// ¤Ñ 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 4 + 1; j++)
		{
			int tmpSum = 0;

			for (int k = j; k < j + 4; k++)
				tmpSum += board[i][k];

			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¤Ó
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < n - 4 + 1; i++)
		{
			int tmpSum = 0;
			for (int k = i; k < i + 4; k++)
			{
				tmpSum += board[k][j];
			}
			maxScore = max(maxScore, tmpSum);
		}
	}
	
	// ¤±
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i + 1][j + 1];
			maxScore = max(maxScore, tmpSum);

		}
	}

	// ¤Ì
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¤Ç
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¤Ã
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i + 1][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}	
	
	// ¤¿
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i - 1][j] + board[i + 1][j] + board[i][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦±¦¯
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i - 1][j] + board[i][j + 1] + board[i + 1][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¥¦£
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 1][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦®¦°
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i + 1][j];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¯¦±
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 1][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¢
	// ¦¦
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 2][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¡¦¡¦¥
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¤
	// ¦¢
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 2][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦£¦¡¦¡
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¢
	// ¦¥
	for (int i = 2; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 2][j + 1];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¦¦¡¦¡
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i - 1][j] + board[i][j + 1] + board[i][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦£
	// ¦¢
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 2][j];
			maxScore = max(maxScore, tmpSum);
		}
	}
		// ¦£¦¡¦¡
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	// ¦¡¦¡¦¤
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			int tmpSum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 2];
			maxScore = max(maxScore, tmpSum);
		}
	}

	cout << maxScore << "\n";

	return 0;
}