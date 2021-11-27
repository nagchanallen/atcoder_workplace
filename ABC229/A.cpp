#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
vector<string> s;

int main() {
    // input
    string s1, s2;
    cin >> s1; cin >> s2;    
    // solve
    if (s1[0] == '#' && s1[1] == '.' && s2[0] == '.') {
        cout << "No" << endl;
    } else if (s1[1] == '#' && s1[0] == '.' && s2[1] == '.') {
        cout << "No" << endl;
    } else if (s2[0] == '#' && s1[0] == '.' && s2[1] == '.') {
        cout << "No" << endl;
    } else if (s2[1] == '#' && s1[1] == '.' && s2[0] == '.') {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}