#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a , b;
    cin >> a >> b;
    cout << endl;
    string s;
    cin >> s;
    if (s=="heat" && a < b)
    cout << b;
    
    if (s=="heat" && a>=b)
    cout << a;
    
    if (s=="freeze" && a > b)
    cout << b;
    
    if (s=="freeze" && a<=b)
    cout << a;
    
    if (s=="auto" )
    cout << b;
    
    if (s=="fan")
    cout << a;
    
    return 0;
}

    
    
