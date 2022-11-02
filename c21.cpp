#include <bits/stdc++.h>
using namespace std;
int main (){
    char a;
    
    cin >> a;
    if (a<= 'z' && a>='a'){
        
        a= a-32;
        cout << a<<endl;
    }
    else if (a <='Z' && a>='A'){
        a=a+32;
        cout << a<<endl;
    }
    
    return 0;
}