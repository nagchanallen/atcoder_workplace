#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int H, W, N;
vector<tuple<int, int, int>> cards;

bool sortx(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return (get<0>(a) < get<0>(b));
}

bool sorty(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return (get<1>(a) < get<1>(b));
}

bool sorti(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return (get<2>(a) < get<2>(b));
}

int main() {
    // input
    cin >> H >> W >> N;
    rep1(i, N) {
        int A, B;
        cin >> A >> B;
        cards.push_back(make_tuple(A, B, i));
    }
    // solve
    sort(cards.begin(), cards.end(), sortx);
    int last = 0;
    int cnt = 0;
    for (auto &card: cards) {
        cnt += max(0, get<0>(card) - last - 1);
        last = get<0>(card);
        get<0>(card) -= cnt;
    }

    sort(cards.begin(), cards.end(), sorty);
    last = 0;
    cnt = 0;
    for (auto &card: cards) {
        cnt += max(0, get<1>(card) - last - 1);
        last = get<1>(card);
        get<1>(card) -= cnt;
    }
    // output
    sort(cards.begin(), cards.end(), sorti);
    for (auto &card: cards) {
        cout << get<0>(card) << " " << get<1>(card) << endl;
    }
}