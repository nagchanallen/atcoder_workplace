#include <iostream>
using namespace std;

int H, W, A[2005][2005], R[2005], C[2005];

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cin >> A[i][j];
        }
    }
    // row and column sum
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            R[i] += A[i][j];
            C[j] += A[i][j];
        }
    }
    // output B
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cout << R[i] + C[j] - A[i][j] << ' ';
        }
        cout << endl;
    }
}