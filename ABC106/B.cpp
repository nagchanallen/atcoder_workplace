#include <iostream>
using namespace std;
int N, ans = 0;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) cnt++;
        }
        if (cnt == 8 && i % 2 == 1) ans++;
    }
    cout << ans << endl;
}