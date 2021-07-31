#include <bits/stdc++.h>
using namespace std;
int A, B, C;

int main() {
    cin >> A >> B >> C;
    if (pow(A,2) + pow(B,2) < pow(C,2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}