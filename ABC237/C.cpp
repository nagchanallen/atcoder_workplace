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
string S;

int main() {
    cin >> S;
    if (S.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }
    reverse(S.begin(), S.end());
    int start = 0;
    int end = S.size() - 1;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'a') {
            start++;
            if (S[end] == 'a') {
                end--;
            }
        } else {
            break;
        }
    }
    int temp = 0;
    for (int i = start; i <= end; ++i) {
        if (S[i] != S[end - temp]) {
            cout << "No" << endl;
            return 0;
        }
        temp++;
    }
    cout << "Yes" << endl;
}