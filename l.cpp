#include <iostream>
#include <cmath>
using namespace std;
int main (){
int n,m=500000,b,v=0;
cin >> n;
while (m>=0){
    m=m-(n*0.3);
    b=n*0.1;
    n=n+b;
    v++;
}
cout << v++;
return 0;
}