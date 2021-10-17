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

// reference: https://www.geeksforgeeks.org/lexicographically-smallest-topological-ordering/

// global variables
int N, M;
vector<vector<int>> G;

int main() {
    // input
    cin >> N >> M;
    G.resize(N + 1);
    rep0(i, M) {
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
    }
    
    // solve
    vector<int> in_degree(N + 1, 0);

    for (auto nodes: G) {
        for (auto node: nodes) {
            in_degree[node]++;
        }
    }

    multiset<int> s;
    for (int i = 1; i <= N; i++)
        if (in_degree[i] == 0)
            s.insert(i);
 
    int cnt = 0;
 
    vector<int> top_order;
 
    while (!s.empty()) {
        int u = *s.begin();
        s.erase(s.begin());
        top_order.push_back(u);
        for (auto itr = G[u].begin(); itr != G[u].end(); itr++)
            if (--in_degree[*itr] == 0)
                s.insert(*itr);
        cnt++;
    }
 
    // Check if there was a cycle
    if (cnt != N) {
        cout << -1 << endl;
        return 0;
    }
 
    // Print topological order
    for (int i = 0; i < top_order.size(); i++)
        cout << top_order[i] << " ";

    cout << endl;
}