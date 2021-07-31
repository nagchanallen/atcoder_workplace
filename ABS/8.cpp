#include <iostream>
using namespace std;
int N, Y;

int main() {
    cin >> N >> Y;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= (N - i); j++) {
            int k = N - i - j;
            if ((i * 10000 + j * 5000 + k * 1000) == Y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}