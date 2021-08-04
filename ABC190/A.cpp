#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    A *= 2; B *= 2;
    if (C == 1) A += 1;
    if (C == 0) B += 1;
    if (A > B) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}