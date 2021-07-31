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
    int A, B;
    cin >> A >> B;
    if (A > 0 && B == 0) {
        cout << "Gold" << endl;
    } else if (B > 0 && A == 0) {
        cout << "Silver" << endl;
    } else if (B > 0 && A > 0){
        cout << "Alloy" << endl;
    }
}