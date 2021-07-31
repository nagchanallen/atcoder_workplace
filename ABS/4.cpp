#include <iostream>
#include <algorithm>
using namespace std;
int A, B, C, X, res;

int main() {
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;
    res = 0;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                int temp = i * 500 + j * 100 + k * 50;
                if (temp == X) {
                    res++;
                }
            }
        }
    }
    cout << res << endl;
}