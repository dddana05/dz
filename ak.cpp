#include <bits/stdc++.h>
using namespace std;
int main () {
    int w;
    cin >> w ;
    for (int i=1; i<w; i++) {
        if ( i*i<=w)
        cout << i*i << endl;
    }
    return 0;
}