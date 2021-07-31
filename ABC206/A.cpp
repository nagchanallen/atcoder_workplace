#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin >> N;
    if (floor(N * 1.08) < 206) {
        cout << "Yay!" << endl;
    } else if (floor(N * 1.08) == 206){
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
}