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
int N, K;
string S;
unordered_map<char, int> mp;

int main() {
    cin >> N >> K;
    cin >> S;

    for (int i = 1; i <= N; ++i) {
        int temp = K;
        if ((N % i) != 0) continue;
        int group = N / i;
        for (int j = 0; j < i; ++j) {
            mp = unordered_map<char, int>();
            for (int k = 0; k < group; ++k) {
                mp[S[k * i + j]]++;
            }
            int maxi = 0;
            char s = S[j];
            for (auto [p, ct]: mp) {
                if (ct >= maxi) {
                    maxi = ct;
                    s = p;
                }
            }
            // cout << i << " " <<  s << endl;
            for (int k = 0; k < group; ++k) {
                if (S[k * i + j] != s) {
                    // cout << S[k * i + j] << " __ " << s << endl;
                    temp--;
                }
            }
        }
        if (temp >= 0) {
            cout << i << endl;
            return 0;
        }
    }
}