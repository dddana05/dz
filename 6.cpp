#include <bits/stdc++.h>
using namespace std;
int main () {
    int a , b , c;
    cin >> a >> b >> c;
    if (a+c > b &&  a+b > c && b+c > a){
        if ( a==b || a==c || c==b){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    } else {
        cout << "ERROR";
    }
}
    
   