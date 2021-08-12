#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
int N, A[200005];
priority_queue<int> pq;
int main() {
    // input
    cin >> N;
    rep0(i, N) {
        cin >> A[i];
        pq.push(A[i]);
    } 
    // solve
    int first = pq.top();
    pq.pop();
    int second = pq.top();
    // output
    rep0(i, N) {
        if (A[i] == first) {
            cout << second << endl;
        } else {
            cout << first << endl;
        }
    }
}