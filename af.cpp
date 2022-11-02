#include <iostream>
using namespace std;

int main() {
    int f, sum = 0;

    cin >> f;

    for (int i = 1; i <= f; ++i) {
        sum += i;
    }

    cout << sum ;
    return 0;
}