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
int N;
string S;

int main() {
    // input
    cin >> N;
    cin >> S;    
    // solve
    int x = 0;
    int maxi = 0;
    rep0(i, S.length()) {
        if (S[i] == 'I') {
            x++;
            maxi = max(x, maxi);
        } else {
            x--;
        }
    }
    // output
    cout << maxi << endl;
}