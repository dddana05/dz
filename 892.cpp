#include <bits/stdc++.h>
using namespace std;
int main () {
    int n ;
    cin >> n;
    if ( 12 == n || (1 <= n  && n <=2)){
        cout <<  "Winter";
    }
    else if ( 3 <= n && n <=5){
        cout <<  "Spring";
    }
   else if (6 <= n && n <=8){
        cout <<  "Summer";
    }
    else if (9 <= n && n <= 11){
        cout << "Autumn";
    }
    else {
        cout << "Error";
    }
    return 0;
}