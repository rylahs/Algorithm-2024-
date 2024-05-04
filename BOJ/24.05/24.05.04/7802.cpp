#include <bits/stdc++.h>

using namespace std;

vector<pair<string, char>> morse = {
{".--", 'A'},
{"-.", 'B'},
{"---", 'C'},
{"..", 'D'},
{"--..", 'E'},
{"--.-", 'F'},
{".-.", 'G'}
};

vector<string> decode(const string& code, int index, string current) {
    if (index == code.size()) return { current };


    vector<string> result, temp;
    for (auto& m : morse) {
        if (code.substr(index, m.first.size()) == m.first) {
            temp = decode(code, index + m.first.size(), current + m.second);
            result.insert(result.end(), temp.begin(), temp.end());
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string line;
    while (getline(cin, line)) {
        vector<string> results = decode(line, 0, "");
        if (results.empty()) {
            cout << "could not be translated" << '\n';
        }
        else {
            sort(results.begin(), results.end()); 
            cout << results[0] << '\n'; 
        }
    }
    return 0;
}