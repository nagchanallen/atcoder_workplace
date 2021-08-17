#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N;
double x[15], y[15];
int main() {
    // input
    cin >> N;
    rep0(i, N) cin >> x[i] >> y[i];
    // solve
    vector<int> v;
    rep0(i, N) v.push_back(i);
    double sum = 0;
    int cnt = 0;
    do {
        cnt++;
        rep0(i, N - 1) {
            sum += sqrt(pow(x[v[i]] - x[v[i + 1]], 2) + pow(y[v[i]] - y[v[i + 1]], 2));
        }
    } while (next_permutation(v.begin(), v.end()));
    // output
    cout << fixed << setprecision(10) << sum / cnt << endl;
}