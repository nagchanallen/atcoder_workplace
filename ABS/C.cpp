#include <iostream>
#include <vector>
using namespace std;
int N;
int result = 0;

int main() {
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    bool isEven = true;
    while (isEven) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 != 0) {
                isEven = false;
                break;
            }
            A.at(i) = A.at(i) / 2;
        }
        if (isEven) {
            result++;
        } else {
            cout << result << endl;
        }
    }
}