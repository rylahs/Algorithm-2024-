#include <bits/stdc++.h>
using namespace std;

int cnt, n;


void run(int n)
{
	if (n == 0)
	{
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� ������?\"\n";
	
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		
		for (int i = 0; i < cnt; i++) cout << "____";
		cout << "��� �亯�Ͽ���.\n";

		return;
	}
	for (int i = n; i < cnt; i++) cout << "____";
	cout << "\"����Լ��� ������?\"\n";
	
	for (int i = n; i < cnt; i++) cout << "____";
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	
	for (int i = n; i < cnt; i++) cout << "____";
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";

	for (int i = n; i < cnt; i++) cout << "____";
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	run(n - 1);

	for (int i = n; i < cnt; i++) cout << "____";
	cout << "��� �亯�Ͽ���.\n";
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n;
	cnt = n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	run(n);
	

	return 0;
}