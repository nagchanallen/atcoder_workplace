#include <iostream>
using namespace std;

long long a, b, c;

int main() {
    cin >> a >> b >> c;
    long long d = 1;
    for (int i = 0; i < b; ++i) {
        d *= c;
    }
    if (a < d) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}