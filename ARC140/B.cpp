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
int N;
string S;
priority_queue<pair<int, int>, vector<pair<int, int>>> pq_max;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq_min;

int main() {
    cin >> N;
    cin >> S;
    int state = 0; // 0 = counting A, 1 = counting R, 2 = counting C;
    int a_cnt = 0;
    int op_cnt = 0;
    int id = 0;
    int total = 0;
    S[N + 1] = 'X';
    for (int i = 0; i <= N; ++i) {
        if (state == 0) {
            if (S[i] == 'A') a_cnt++;
            if (S[i] == 'R') state = 1;
            if (S[i] == 'C') a_cnt = 0;
        } else if (state == 1) {
            if (S[i] == 'C') {
                state = 2;
                op_cnt = 1;
            } else {
                state = 0;
                a_cnt = 0;
                if (S[i] == 'A') a_cnt++;
            }
        } else {
            if (S[i] == 'C') {
                op_cnt++;
            } else {
                int cnt = min(op_cnt, a_cnt);
                total += cnt;
                if (cnt > 0) pq_max.push({cnt, id});
                if (cnt > 0) pq_min.push({cnt, id});
                id++;
                state = 0;
                a_cnt = 0;
                if (S[i] == 'A') a_cnt++;
            }
        }
    }
    int op = 1;
    int ans = 0;
    while (total > 0) {
        auto [maxi, maxi_id] = pq_max.top();
        auto [mini, mini_id] = pq_min.top();
        if (op % 2 == 1) {
            // odd
            pq_max.pop();
            int new_maxi = maxi - 1;
            total--;
            if (new_maxi > 0) {
                pq_max.push({new_maxi, maxi_id});
                pq_min.push({new_maxi, maxi_id});
            }
        } else {
            // even
            pq_min.pop();
            total -= mini;
        }
        op++;
        ans++;
    }
    cout << ans << endl;
}