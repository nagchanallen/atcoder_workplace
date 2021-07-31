#include <iostream>
#include <set>

using namespace std;
int N, temp;
set<int> M;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        M.insert(temp);
    }
    cout << M.size() << endl;
}