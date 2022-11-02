#include <bits/stdc++.h>
using namespace std;
int main () {
 string s;
 cin >> s;
 int cnto=0,cntz=0;
 for (int i=0; i < s.size(); i++){
    char sim1=s[i];
    int sim=sim1;
    if (sim1<=90){
        cnto++;
    }
    else {
        cntz++;
    }
 }
 cout << cnto << " " << cntz;
 return 0;
}