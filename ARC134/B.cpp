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
int N;
string s;
priority_queue<int, vector<int>, greater<int>> pq;
map<int, int> mp;

int main() {
    cin >> N;
    cin >> s;
    for (char c: s) {
        pq.push(c);
        mp[c]++;
    }
    int left = 0, right = N - 1;
    while (left < right) {
        int top = pq.top();
        if (mp[top] == 0) {
            pq.pop();
            continue;
        } 
        if (s[left] == top) {
            mp[s[left]]--;
            left++; pq.pop(); 
        } else if (s[right] != top) {
            mp[s[right]]--;
            right--;
        } else {
            swap(s[left], s[right]);
            mp[s[left]]--; mp[s[right]]--;
            pq.pop();
            left++; right--;
        }
    }
    cout << s << endl;
}