#include <iostream>
#include <stdlib.h>
using namespace std;
int N, x[100001], y[100001], t[100001];

int main() {
    cin >> N;

    t[0] = 0; x[0] = 0; y[0] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    for (int i = 1; i <= N; i++) {
        int distance = abs(x[i] - x[i - 1]) + abs(y[i] - y[i - 1]);
        
        if (distance > (t[i] - t[i - 1])) {
            cout << "No" << endl;
            return 0;
        }

        if ((distance - (t[i] - t[i - 1]) ) % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}