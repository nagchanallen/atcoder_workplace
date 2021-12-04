#include <iostream>
#include <algorithm>
using namespace std;

long long N, A, B, C;

int main() {
    cin >> N;
    cin >> A >> B >> C;
    long long mini = 2e9;
    for (int i = 0; i <= 9999; ++i) {
        for (int j = 0; j <= 9999 - i; ++j) {
            if ((N - A * i - B * j) % C == 0 && (N - A * i - B * j) >= 0) {
                mini = min(mini, i + j + (N - A * i - B * j) / C);
            }
        }
    }
    cout << mini << endl;
}