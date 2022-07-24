#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
ll MOD = 1e9+7;
ll LLINF = 3e18;
#define rep0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
int INTINF = 2e9;

// global variables
ll N, A, B;

int main() {
    cin >> N >> A >> B;
    ll temp = 0;
    ll sum = (N + (ll)1) * N / (ll)2;
    if (A == B) {
        ll sum_a_b = (N / A * A + A) * (N / A) / (ll)2;
        cout << sum - sum_a_b << endl;
    } else {
        ll sum_a = (N / A * A + A) * (N / A) / (ll)2;
        ll sum_b = (N / B * B + B) * (N / B) / (ll)2;
        ll sum_a_b = (N / lcm(A, B) * lcm(A, B) + lcm(A, B)) * (N / lcm(A, B)) / (ll)2;
        cout << sum - sum_a - sum_b + sum_a_b << endl;
    }
}