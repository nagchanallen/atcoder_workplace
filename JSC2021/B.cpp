#include <iostream>
using namespace std;
int N, M, A[1001], B[1001];

int main() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 1; i <= M; i++) {
        cin >> B[i];
    }
    
    for (int i = 1; i <= 1000; i++) {
        bool found = false;
        for (int j = 1; j <= N; j++) {
            if (A[j] == i) {
                found = !found;
            }
        }
        for (int j = 1; j <= M; j++) {
            if (B[j] == i) {
                found = !found;
            }
        }
        if (found) {
            cout << i << " ";
        }
    }
}
