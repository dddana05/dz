#include <bits/stdc++.h>
using namespace std;
int main () {

    int w, h, r, d;

    cin >> w >> h >> r;

    d = r * 2;

    if ( d <= w && d <= h){

        cout << "YES";
    }
    else {
        cout <<"NO";
    }
    return 0;
}
