#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   
    string n;
    int s1 = 0, s2 = 0;
    cin >> n;
    s1 = n[0] + n[1] + n[2];
    s2 = n[3] + n[4] + n[5];
    if(s1 == s2){
        cout << "YES";
    }
    else {
        cout <<"NO";
    }

    
    return 0;
}
