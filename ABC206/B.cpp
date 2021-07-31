#include <bits/stdc++.h>
using namespace std;
int N, sum = 0;

int main() {
    cin >> N;
    for (int i = 1; i <= 1e9; i++) {
        sum += i;
        if (sum >= N) {
            cout << i << endl;
            break;
        }
    }
}