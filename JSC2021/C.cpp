#include <iostream>
#include <math.h>
using namespace std;
double A, B;

int main() {
    cin >> A >> B;
    for (int i = B / 2; i >= 1; i--) {
        int low = ceil(A / i);
        int high = B / i;
        if (low < high && low * i < B) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}