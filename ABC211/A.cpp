#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)


int main() {
    double A, B, C;
    cin >> A >> B;
    C = ((A - B) / 3 + B);
    cout.precision(12);
    cout << C << endl;
    // printf("%f \n", C);
}