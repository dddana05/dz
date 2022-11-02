#include <iostream>
using namespace std;
int main(){
int k,m;
cin >> k >> m;
if (k > m) {
    cout << "1";
} else if (k < m) {
    cout << "2";
} else if (k == m) {
    cout << "0";
}
 return 0;
}