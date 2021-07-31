#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int A = 0;
int B = 0;

int main() {
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A += a.at(i);
        } else {
            B += a.at(i);
        }
    }
    cout << A - B << endl;
}