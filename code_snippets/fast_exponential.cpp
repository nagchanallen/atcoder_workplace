#include <bits/stdc++.h>
using namespace std;
int a, b, m;

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

int main() {
    cin >> a >> b >> m;
    int result = fast_expo(a, b, m);
    cout << result << endl;
}