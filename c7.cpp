#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,x,y;
        cin >> n >> x >> y;
    if (n*x< y){
        cout << "NO";
    }
    else if (n*x>y){
        cout << "YES";
    }
    else {
        cout << "NO Difference";
    }
    return 0;
}