#include <bits/stdc++.h>
using namespace std;
int main () {
     long long int c,h,o,min;
    
    cin >> c >> h >> o;
    c/=2;
    h/=6;
    o/=1;
    min=c;

    if (min>h)
        min=h;
    if (min>o)
        min=o;
    cout << min;
return 0;
}