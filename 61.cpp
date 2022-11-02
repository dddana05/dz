#include <bits/stdc++.h>
using namespace std;
int main () {
    int k , m , k1, k2, k3, k4, m1, m2, m3, m4;
    cin >> k1 >> m1
        >> k2 >> m2
        >> k3 >> m3
        >> k4 >> m4;

    k = k1 + k2 + k3 + k4;
    m = m1 + m2 + m3 + m4;
    if (k > m) {
        cout << "1";
    }
    else if (k < m) {
        cout << "2";
    }
    else {
        cout << "DRAW";
    }
return 0;
}
