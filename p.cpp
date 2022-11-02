#include <iostream>

using namespace std;

int main()
{int n,m,b;
cin >> n >> m >> b;
if ((n+m)>b & (m+b)>n & (n+b)>m){
    cout << "Valid";
}
else {
    cout << "Invalid";
}
}