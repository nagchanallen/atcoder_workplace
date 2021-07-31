#include <iostream>
#include <string>

using namespace std;
string x;
int result = 0;

int main() {
    cin >> x;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '1') {
            result++;
        }
    }
    cout << result << endl;
}