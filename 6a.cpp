#include <bits/stdc++.h>
using namespace std;
int main () {
    int a , b , c;
    cin >> a >> b >> c;
    if ((a+c > b &&  a+b > c && b+c > a) && (a==b || a==c || c==b)){
        cout << "YES\n";
    }
        else if (a+c > b &&  a+b > c && b+c > a){
            cout << "NO\n";
        }
        else {
            cout << "ERROR";
        }
}