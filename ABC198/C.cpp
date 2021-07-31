#include <iostream>
#include <math.h>
using namespace std;
int R;
float X, Y;

int main() {
    cin >> R >> X >> Y;
    float distance = sqrt(X * X + Y * Y);
    int intDistance = distance;
    if (intDistance % R == 0 && distance - intDistance == 0) {
        cout << intDistance / R << endl;
    } else if (intDistance / R < 1) {
        cout << 2 << endl;
    } else {
        cout << intDistance / R + 1 << endl;
    }
}