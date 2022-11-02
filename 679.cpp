#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int l,w,h;
    cin >> l >> w >>h;
    int n = 2*(h * l + h * w);
    if(n % 16 == 0)
        cout << n / 16;
    else
        cout << n / 16 + 1;
    return 0;
}