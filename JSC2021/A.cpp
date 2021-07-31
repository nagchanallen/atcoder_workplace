#include <iostream>
using namespace std;
double X, Y, Z;
int result = 0;

int main() {
    cin >> X >> Y >> Z;
    for (int i = 1; i <= 1000000; i++) {
        if (i / Z < Y / X) {
            result++;
        }
    } 
    cout << result << endl;
}