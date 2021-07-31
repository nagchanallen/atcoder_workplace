#include <iostream>
using namespace std;
int a, b;

int main() {
    cin >> a >> b;
    int product = a * b;
    if (product % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}