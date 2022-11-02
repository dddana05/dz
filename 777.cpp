#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int s,t;
    cin >> s>>t;
    
    if( s > t){

        cout << (t + 12 - s);
    }
    else{
        cout << (t -s );
    }
    return 0;
}