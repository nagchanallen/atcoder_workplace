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
int N, M;
string S[100005], T[100005];
unordered_set<string> temp;

int main() {
    cin >> N >> M;
    rep1(i, N) {
        cin >> S[i];
    }
    rep1(i, M) {
        cin >> T[i];
        temp.insert(T[i]);
    } 
    rep1(i, N) {
        if (temp.count(S[i]) > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}