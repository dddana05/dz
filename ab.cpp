#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int buff = 1;
    
    for (int i=1; i<=n; i++) {
        buff *=i;


    }
    cout << buff << '\n';
}        
