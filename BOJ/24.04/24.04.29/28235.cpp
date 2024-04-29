#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unordered_map<string, string> ump;
	ump.insert({ "SONGDO", "HIGHSCHOOL" });
	ump.insert({ "CODE", "MASTER" });
	ump.insert({ "2023", "0611" });
	ump.insert({ "ALGORITHM", "CONTEST" });

	string input;
	cin >> input;

	if (ump.find(input) != ump.end())
		cout << ump.find(input)->second << '\n';


	return 0;
}