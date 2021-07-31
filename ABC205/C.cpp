#include <bits/stdc++.h>
using namespace std;
signed long long A, B, C;

int main() {
    cin >> A >> B >> C;
    if (C % 2 == 0) {
        if (abs(A) > abs(B)) {
            cout << '>' << endl;
        } else if (abs(A) < abs(B)) {
            cout << '<' << endl;
        } else {
            cout << '=' << endl;
        }
    } else {
        if (A > B) {
            cout << '>' << endl;
        } else if (A < B) {
            cout << '<' << endl;
        } else {
            cout << '=' << endl;
        }
    }
}