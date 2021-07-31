#include <bits/stdc++.h>
using namespace std;
int A, B;

int main() {
    cin >> A >> B;
    if (B < A) {
        cout << 0 << endl;
        return 0;
    }
    cout << B - A + 1 << endl;
}