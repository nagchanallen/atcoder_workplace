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
int A, B, C, D, E, F, X;

int main() {
    cin >> A >> B >> C >> D >> E >> F >> X;
    int dis_1 = 0, dis_2 = 0;
    int t1 = 0;
    while (t1 < X) {
        for (int i = 0; i < A; ++i) {
            if (t1 >= X) break;
            dis_1 += B;
            t1++;
        }
        if (t1 >= X) break;
        t1 += C;
    }

    int t2 = 0;
    while (t2 < X) {
        for (int i = 0; i < D; ++i) {
            if (t2 >= X) break;
            dis_2 += E;
            t2++;
        }
        if (t2 >= X) break;
        t2 += F;
    }

    if (dis_1 > dis_2) {
        cout << "Takahashi" << endl;
    } else if (dis_2 > dis_1) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
}