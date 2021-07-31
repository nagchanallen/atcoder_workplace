#include <iostream>
#include <math.h>
using namespace std;
int A, B;
int socket = 1, res = 0;

int main() {
    cin >> A >> B;
    while (socket < B) {
        socket = socket - 1 + A;
        res++;
    }
    cout << res << endl;
}