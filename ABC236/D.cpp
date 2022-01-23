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
ll N, A[20][20], ans = 0;

// reference: https://stackoverflow.com/questions/37447697/an-efficient-method-to-generate-all-possible-ways-to-pair-up-items-in-a-data-set

void generatePairings(vector<int> items, int itemcount, int start) {
    // is this a complete pairing?
    ll temp = 0;
    if (start == itemcount) {
        // output pairings:
        int i;
        for(i = 0; i < itemcount; i += 2) {
            ll mini = min(items[i], items[i + 1]);
            ll maxi = max(items[i], items[i + 1]);
            temp = temp ^ (A[mini][maxi]);
        }
        ans = max(temp, ans);
        return;
    }

    int j;
    for(j = start+1; j<itemcount; j++)
    {
        // swap start+1 and j:
        int temp = items[start+1];
        items[start+1] = items[j];
        items[j] = temp;

        // recurse:
        generatePairings(items, itemcount, start+2);

        // swap them back:
        temp = items[start+1];
        items[start+1] = items[j];
        items[j] = temp;
    }
}

int main() {
    cin >> N;
    for (int i = 1; i <= 2 * N - 1; ++i) {
        for (int j = i + 1; j <= 2 * N; ++j) {
            cin >> A[i][j];
        }
    }
    vector<int> v(2 * N);
    for (int i = 0; i < 2 * N; ++i) v[i] = i + 1;
    generatePairings(v, 2 * N, 0);
    cout << ans << endl;
}