#include <bits/stdc++.h>
using namespace std;
int P, C[15], cnt = 0;

int main() {
    cin >> P;
    C[0] = 1;
    for (int i = 1; i <= 10; i++) {
        C[i] = C[i - 1] * i;
    }
    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < 100; j++) {
            if (P - C[i] >= 0){
                P -= C[i];
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}