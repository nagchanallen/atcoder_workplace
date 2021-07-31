#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string N, s1, s2;
bool isP = false;

void checkP(string str) {
    s1 = str.substr(0, str.length() / 2);
    if (str.length() % 2 == 0) {
        s2 = str.substr(str.length() / 2);
    } else {
        s2 = str.substr(str.length() / 2 + 1);
    }
    reverse(s2.begin(), s2.end());
    if (s1 == s2) {
        isP = true;
    }
    return;
}

int main() {
    cin >> N;
    int len = N.length();
    checkP(N);
    for (int i = 0; i < len; i++) {
        N = '0' + N;
        checkP(N);
    }
    if (isP) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}