#include <iostream>

using namespace std;

int threexp1(int x) {
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        cout << x << endl;
    }
    cout << "OK" << endl;
    return 0;
}

int main() {
    return threexp1(27);
}
