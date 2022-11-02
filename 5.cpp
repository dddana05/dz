#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, sum =0;
    cin >> n;


    for (int i = 0; i < n ; i++){

    int x;
    cin >> x;
    sum = sum + x;
    }
    
    if (sum % 2 ==0){
        cout << "Sum of digits is even\n";
    }
    else {
        cout << "Sum of digits is odd\n";
    }
}

