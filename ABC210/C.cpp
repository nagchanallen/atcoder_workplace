#include <bits/stdc++.h>
using namespace std;
int N, K, c[300005], s = 0, ans = 0;

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }
    map<int, int> temp;
    for (int i = 0; i < K; i++) {
        if (!temp[c[i]]) {
            s++;
            ans = max(s, ans);
        }
        temp[c[i]]++;
    }
    for (int i = K; i < N; i++) {
        temp[c[i - K]]--;
        if (!temp[c[i - K]]) {
            s--;
        }
        if (!temp[c[i]]) {
            s++;
            ans = max(s, ans);
        }
        temp[c[i]]++;
    }
    cout << ans << endl;
}