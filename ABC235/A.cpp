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
char a, b, c;

int main() {
    cin >> a >> b >> c;
    string abc = "";
    abc = abc + a + b + c;
    string bca = "";
    bca = bca + b + c + a;
    string cab = "";
    cab = cab + c + a + b;
    cout << stoi(abc) + stoi(bca) + stoi(cab) << endl;
}