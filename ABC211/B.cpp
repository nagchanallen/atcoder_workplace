#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)

int main() {
    set<string> a;
    rep(i, 4) {
        string S;
        cin >> S;
        if (S == "H" || S == "2B" || S == "3B" || S == "HR") {
            a.insert(S);
        }
    }
    if (a.size() == 4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}