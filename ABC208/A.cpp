#include <bits/stdc++.h>
using namespace std;
int A, B;

int main() {
    cin >> A >> B;
    if (A <= B && B <= 6 * A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}