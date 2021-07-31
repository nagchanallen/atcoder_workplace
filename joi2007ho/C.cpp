#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<pair<int, int>> P;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        P.push_back(make_pair(x, y));
    }
    if (n < 4) {
        cout << 0 << endl;
        return 0;
    }

    sort(P.begin(), P.end());
    
}