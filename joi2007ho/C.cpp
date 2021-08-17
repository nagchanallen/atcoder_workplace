#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, ans = 0;
    vector<pair<int, int>> Pts;
    map<int, vector<int>> PtsMap;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        Pts.push_back(make_pair(x, y));
        PtsMap[x].push_back(y);
        sort(PtsMap[x].begin(), PtsMap[x].end());
    }
    if (n < 4) {
        cout << 0 << endl;
        return 0;
    }

    sort(Pts.begin(), Pts.end());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = Pts[j].first - Pts[i].first;
            int dy = Pts[j].second - Pts[i].second;
            
            if (dy >= 0) {
                int nx1 = Pts[i].first + dy;
                int ny1 = Pts[i].second - dx;
                if (PtsMap[nx1].empty()) continue;
                int ind = lower_bound(PtsMap[nx1].begin(), PtsMap[nx1].end(), ny1) - PtsMap[nx1].begin();
                if (PtsMap[nx1][ind] != ny1) continue;
                int nx2 = Pts[j].first + dy;
                int ny2 = Pts[j].second - dx;
                if (PtsMap[nx2].empty()) continue;
                ind = lower_bound(PtsMap[nx2].begin(), PtsMap[nx2].end(), ny2) - PtsMap[nx2].begin();
                if (PtsMap[nx2][ind] == ny2) ans = max(ans, dx*dx+dy*dy);
            }
            if (dy <= 0) {
                int nx1 = Pts[i].first + dy;
                int ny1 = Pts[i].second + dx;
                if (PtsMap[nx1].empty()) continue;
                int ind = lower_bound(PtsMap[nx1].begin(), PtsMap[nx1].end(), ny1) - PtsMap[nx1].begin();
                if (PtsMap[nx1][ind] != ny1) continue;
                int nx2 = Pts[j].first + dy;
                int ny2 = Pts[j].second + dx;
                if (PtsMap[nx2].empty()) continue;
                ind = lower_bound(PtsMap[nx2].begin(), PtsMap[nx2].end(), ny2) - PtsMap[nx2].begin();
                if (PtsMap[nx2][ind] == ny2) ans = max(ans, dx*dx+dy*dy);
            }
        }
    }
    cout << ans << endl;
}