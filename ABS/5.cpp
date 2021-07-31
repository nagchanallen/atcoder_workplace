#include <iostream>
using namespace std;
int N, A, B;
int res = 0;

int main() {
    cin >> N >> A >> B;
    for (int i = 1; i <= N; i++) {
        int a = i / 10000;
        int b = i % 10000 / 1000;
        int c = i % 1000 / 100;
        int d = i % 100 / 10;
        int e = i % 10;
        int digitSum = a + b + c + d + e;
        if (digitSum >= A && digitSum <= B) {
            res += i;
        }
    }
    cout << res << endl;
}