#include <bits/stdc++.h>
using namespace std;
int N;
long long C[200005], sum = 1, s = 0;
long long D = 1000000007;

int main() {
    cin >> N;
    C[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }
    sort(C, C + (N + 1));

    for (int i = 1; i <= N; i++) {
        s += (C[i] - C[i - 1]);
        sum = (sum * s) % D;
        s--;
    }
    cout << sum % D << endl;
}