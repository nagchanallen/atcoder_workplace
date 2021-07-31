#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string S;
int maxi = 0, cnt = 0;

int main() {
    cin >> S;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << maxi << endl;
}