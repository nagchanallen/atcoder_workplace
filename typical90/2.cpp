#include <iostream>
using namespace std;

int N;

bool validate (string s) {
    int cnt = 0;
    for (char c: s) {
        if (c == '(') {
            cnt++;
        } else {
            cnt--;
        }
        if (cnt < 0) return false;
    }
    return (cnt == 0);
}

int main() {
    cin >> N;
    for (int i = 0; i < (1 << N); ++i) {
        string str = "";
        for (int j = N - 1; j >= 0; --j) {
            if (i & (1 << j)) {
                str += ")";
            } else {
                str += "(";
            }
        }
        if (validate(str)) cout << str << endl;
    }
}