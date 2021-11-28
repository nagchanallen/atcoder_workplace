#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N;
vector<vector<int>> G;

int main() {
    cin >> N;
    G.resize(N);
    for (int i = 0; i < N - 1; ++i) {
        int A, B; 
        cin >> A >> B;
        A--; B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    vector<int> dist1(N, -1);
    queue<int> q1;
    q1.push(0);
    dist1[0] = 0;
    while (!q1.empty()) {
        int v = q1.front(); q1.pop();
        for (int next: G[v]) {
            if (dist1[next] >= 0) continue;
            dist1[next] = dist1[v] + 1;
            q1.push(next);
        }
    }
    int farest = 0, temp = 0;
    for (int i = 0; i < N; ++i) {
        if (dist1[i] > temp) {
            farest = i;
            temp = dist1[i];
        }
    }
    vector<int> dist2(N, -1);
    queue<int> q2;
    q2.push(farest);
    dist2[farest] = 0;
    while (!q2.empty()) {
        int v = q2.front(); q2.pop();
        for (int next: G[v]) {
            if (dist2[next] >= 0) continue;
            dist2[next] = dist2[v] + 1;
            q2.push(next);
        }
    }
    int maxi = 0;
    for (int i = 0; i < N; ++i) {
        maxi = max(maxi, dist2[i]);
    }
    cout << maxi + 1 << endl;
}