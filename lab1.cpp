#include <bits/stdc++.h>
using namespace std;
int main () {
     long long int a, b, c;
     cin >> a >> b >> c;

if (a > b && b > c) {
 cout << a << " " << b << " " << c;

}
if (a > c && c > b){
    cout << a << " "<< c << " " << b;
}
if (b > a && a > c){
    cout << b << " " << a << " " << c;
}
if (b > c && c > a) {
    cout << b << " " << c << " " << a;
}
if (c > a && a >  b){
    cout << c << " " <<  a << " " << b;
}
if (c > b && b > a){
    cout << c <<" "<< b <<" " << a ;
}
}  