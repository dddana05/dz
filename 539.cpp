#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    if (n > 1){
    if (n % 2 ==0) cout << n/2;
    if (n % 2 !=0) cout << n;
    }
    else cout << "0";
    return 0;
}

