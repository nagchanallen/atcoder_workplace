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
string S[20];
int N, K;
ll cnt[30];

int main() {
    cin >> N >> K;
    rep0(i, N) cin >> S[i];

    int maxi = 0;

    for (int i = 0; i < (1 << N); ++i) {
        for (int j = 0; j < 26; ++j) {
            cnt[j] = 0;
        }
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                for (char k: S[j]) {
                    cnt[k - 'a']++;
                }
            }
        }
        int temp = 0;
        for (int j = 0; j < 26; ++j) {
            if (cnt[j] == K) {
                temp++;
            }
        }
        maxi = max(temp, maxi);
    }
    
    cout << maxi << endl;
}