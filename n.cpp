#include <iostream>
using namespace std;
int main (){
    int m,n,b;
    cin >> m>>n>>b;
    if( (m+n)>b & (m+b)>n & (n+b)>m ){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}