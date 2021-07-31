#include <iostream>
#include <algorithm>
using namespace std;
int A, B, C, X, Y, ans = 1e9;

int main() {
    cin >> A >> B >> C >> X >> Y;
    for (int i = 0; i <= 200000; i += 2) {
        int a = max(X - i / 2, 0);
        int b = max(Y - i / 2, 0);
        ans = min(ans, a * A + b * B + i * C);
    }
    cout << ans << endl;
}