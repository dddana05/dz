#include <iostream>
using namespace std;
int main (){
    int n, sum=0;

    cin >> n;
    if ( n < 0){
        while ( n != 0){
            sum+=n;
            n = n+1;
        }
        cout << sum;
    }
    else if ( n ==0){
        cout << '1';
    }
    else {
        for (int i=1; i <= n; i++) {
            sum+=i;
        }
        cout << sum;
    }
}
