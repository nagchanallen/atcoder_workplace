#include <iostream>
#include <string>
using namespace std;
int N, ans = 0;
string S;

int main() {
    cin >> N;
    cin >> S;
    for (int i = 0; i < 1000; i++) {
        string pin;
        if (i == 0) {
            pin = "000";
        } else if (i < 10) {
            pin = "00" + to_string(i);
        } else if (i < 100) {
            pin = '0' + to_string(i);
        } else {
            pin = to_string(i);
        }
        int p = 0;
        bool good = false;
        for (int j = 0; j < N; j++) {
            if (S[j] == pin[p]) p++;
            if (p == 3) {
                ans++;
                p = 0;
                break;
            }
        }
    }
    cout << ans << endl;
}