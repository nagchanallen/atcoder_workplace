#include <iostream>
#include <math.h>
using namespace std;
int N, P;
int m = pow(10, 9) + 7;

long long powm(long long b, long long p) {
    if (p == 0)
        return 1;
    if (p % 2 == 1)
        return b * powm(b, p - 1) % m;
    else
    {
        long long t = powm(b, p / 2);
        return t * t % m;
    }
}

int main() {
    cin >> N >> P;

    long long answer = (P - 1) * powm(P - 2, N - 1) % m;

    cout << answer << endl;
}