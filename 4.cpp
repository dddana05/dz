#include <bits/stdc++.h>
using namespace std;
int main () {
    double x, y;
    cin >> x >> y;
    int cnt = 1;

    while (x < y) {
        cnt ++;
        x = x + (x / 10);
    }
    cout << cnt << endl;
}
