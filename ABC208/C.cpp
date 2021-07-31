#include <bits/stdc++.h>
using namespace std;
long long N, K, a[200005];
long long result, res[200005];
vector<pair<long long, long long>> p;

int main() {
    cin >> N >> K;
    for (long long i = 0; i < N; i++) {
        cin >> a[i];
        p.push_back(make_pair(a[i], i));
    }
    result = K / N;
    for (long long i = 0; i < N; i++) {
        res[i] = result;
    }
    long long remainK = K % N;
    sort(p.begin(), p.end());
    for (long long i = 0; i < remainK; i++) {
        res[p.at(i).second] += 1;
    }
    for (long long i = 0; i < N; i++) {
        cout << res[i] << endl;
    }
}