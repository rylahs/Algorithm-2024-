#include <bits/stdc++.h>
using namespace std;

bool isError(const string& s)
{
	if (s.find('_') == string::npos)
		return isupper(s[0]);

	else
	{
		if (s[0] == '_' || s.back() == '_')
			return true;
		for (auto& e : s)
			if (isupper(e))
				return true;
		return s.find("__") != string::npos;
	}
}

string javatoCpp(string s)
{
	string tmp;
	for (int i = 0; i < s.size();)
	{
		tmp.push_back(tolower(s[i++]));

		while (i < s.size() && islower(s[i]))
			tmp.push_back(s[i++]);
		tmp.push_back('_');
	}
	tmp.pop_back();
	return tmp;
}

string cppToJava(string s)
{
	string tmp;
	for (int i = 0; i < s.size(); i++)
	{
		tmp.push_back(toupper(s[i++]));

		while (i < s.size() && s[i] != '_')
			tmp.push_back(s[i++]);
	}
	tmp[0] = tolower(tmp[0]);

	return tmp;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	if (isError(str))
		cout << "Error!\n";

	else
	{
		bool flag = str.find('_') == string::npos;
		cout << (flag ? javatoCpp : cppToJava)(str) << '\n';
	}

	return 0;
}