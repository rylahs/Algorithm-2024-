#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> st;

    for (int i = 0; i < n; i++) 
    {
        int d;
        cin >> d;
        st.insert(d);
    }

    int a = 1, b = 1;
    
    for (int i = 0; i < 4 - n; i++) 
    {
        a *= 6;
        b *= 6 - n - i;
    }
    int ansA, ansB;
    if (st.size() < n) 
    {
        ansA = 0;
        ansB = a;
    }
    else 
    {
        ansA = b;
        ansB = a - b;
    }

    cout << ansA << " " << ansB << '\n';
    return 0;
}
