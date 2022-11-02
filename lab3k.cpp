#include <bits/stdc++.h>
using namespace std;

int main () {
    int k;
    cin >> k;
    for (int i = 0; i < k; i++){
        cin >> a[i];
    }
    for (int i = 0; i < k; i++){
        if (a[i]!=a[i+1]){
            cout << a[i] << " ";
        }
    }
return 0;
}