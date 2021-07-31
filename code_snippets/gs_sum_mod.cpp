#include <bits/stdc++.h>
using namespace std;

int fast_expo(int a, int b, int m) {
    if (b == 0) {
        return 1;
    }

    if (b % 2 == 0) {
        int x = fast_expo(a, b / 2, m);
        return x * x % m;
    } else {
        int x = fast_expo(a, b - 1, m);
        return x * a % m;
    }
}
// find the a + a^2 + a^3 + ... + a^b % m

int solve(int a, int b, int m) {
    if (b == 1) {
        return a;
    }

    if (b % 2 == 0) {
        return (solve(a, b/2, m) * (fast_expo(a, b/2, m) + 1)) % m;
    } else {
        return (solve(a, b/2, m) * (fast_expo(a, b/2, m) + 1) + fast_expo(a, b, m)) % m;
    }
}

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    int result = solve(a, b, m);
    cout << result << endl;
}