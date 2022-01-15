#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll N, X, M;

ll helper(ll a, ll b, ll m) {
	if (b == 0 || b == 1) {
		return a % m;
	}
	ll half = helper(a, b / 2, m) % m;
	if (b % 2 == 0) {
		return (half * half) % m;
	} else {
		return (half * half * a) % m;
	}
}

int main() {
	cin >> N >> X >> M;
	unordered_set<ll> store;
	vector<ll> v;
	ll temp = X, cnt = 1, ans = X;
	bool is_du = false;
	store.insert(temp);
	for (int i = 1; i < N; ++i) {
		temp = temp * temp % M;
		if (store.count(temp) > 0) {
			is_du = true;
			break;	
		}
		ans += temp;
		store.insert(temp);
		cnt++;
	}
	if (!is_du) {
		cout << ans << endl;
		return 0;
	}
	ll acc = temp;
	ll target = temp;
	while (true) {
		v.push_back(acc);
		temp = temp * temp % M;
		if (temp == target) break;
		acc += temp;
	}
	ans += (N - cnt) / v.size() * acc;
	if ((N - cnt) % v.size() != 0) {
		ans += v[(N - cnt) % v.size() - 1];
	}
	cout << ans << endl;
}
