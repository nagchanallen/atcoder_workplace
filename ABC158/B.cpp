#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
ll N, A, B;

int main() {
    // input
    cin >> N >> A >> B;
    // output
    cout << N / (A + B) * A + min(A, N % (A + B)) << endl;
}