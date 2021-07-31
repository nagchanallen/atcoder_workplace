#include <iostream>
#include <string>
using namespace std;
string S;
string str[4] = {"dream", "dreamer", "erase", "eraser"};
bool dp[100001];

int main() {
    cin >> S;

    dp[0] = true;

    int slen = S.length();

    for (int i = 0; i < slen; i++) {
        if (!dp[i]) {
            continue;
        }
        for (const string &target: str) {
            string sub = S.substr(i, target.length());
            if (sub == target) {
                dp[i + target.length()] = true;
            }
        }
    }

    if (dp[S.length()]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}