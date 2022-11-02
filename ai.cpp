#include <bits/stdc++.h>
using namespace std;
int main () {

    int h, a[1010], k=0;


    cin >> h;

    for (int i = 1; i <=h; i++ ) {


        cin >> a[i];

        if (a[i] % 10 == 7)


        k++;
    }
    
    cout << k;
}