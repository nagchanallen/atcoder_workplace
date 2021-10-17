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
string S, mini, maxi, temp;

int main() {
    // input
    cin >> S;
    mini = S; maxi = S;    
    // solve
    for (int i = 0; i < S.length(); ++i) {
        temp = "";
        for (int j = 0; j < S.length(); ++j) {
            temp = temp + S[(i + j) % S.length()];
        }
        if (temp <= mini) {
            mini = temp;
        }
        if (temp >= maxi) {
            maxi = temp;
        }
    }
    cout << mini << endl;
    cout << maxi << endl;
}