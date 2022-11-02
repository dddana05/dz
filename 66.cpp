#include <bits/stdc++.h>
using namespace std;
int main () {
    string s= "qwertyuiopasdfghjklzxcvbnm";
    char c;
    cin >> c;
    cout << s[s.find(c) + 1];
    return 0;
}
    