#include <iostream>

using namespace std;

int main()
{int m,n,b;
cin >>m>>n>>b;
if (m+n>=30 & b>=20 & m+n+b>=70){
    cout << "YES!";
}
else {
    cout << "NO.";
}
return 0;
}